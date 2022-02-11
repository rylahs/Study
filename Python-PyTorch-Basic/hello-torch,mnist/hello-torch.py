import torch

# 입력 뉴런 : 5개, 출력 뉴런 : 3개
# 총 사용 시냅스 15개

hello = torch.nn.Linear(5, 3)

# 임의의 입력 벡터 2개 만들기
data = torch.randn(2, 5)

# 인공 신명망에 입력하고 결과를 출력
print(data)
print(hello(data))

# 필요한 패키지 가져오기
from torchvision.datasets import MNIST # TorchVision에서 MNIST 함수를 가져옴 (배치 설정 등)
import torchvision.transforms as transforms # Torchvision에서 Transform 함수를 수입
from torch.utils.data import DataLoader # Dataloader, 학습용 데이터를 한줄씩 가져올 때 사용
import torch.nn as nn # 인공신경망을 만드는 층 NN 패키지
from torchsummary import summary

# 데이터 변환 방식 지정
rules = transforms.Compose([ # DNN이 PyTorch로 만들어지기 때문에 Pytorch Tensor로 전환
    transforms.ToTensor(), # Numpy -> PyTorchTensor
])

# 학습용 데이터 로더
train_loader = DataLoader( # 6만개의 이미지, 한 배치 = 500개씩
    MNIST('mnist', train=True, download=True, transform=rules),
    batch_size=500, shuffle=True
)

# 평가용 데이터 로더
test_loader = DataLoader(
    MNIST('mnist', train=False, download=True, transform=rules),
    batch_size=500, shuffle=False
)


# 임의의 이미지 한 batch 가져오기
# i = iter(train_loader)
# images, labels = i.next()
#
# print(images[0])
# print(labels[0])

# PyTorch DNN을 Sequential 모델로 구현
model = nn.Sequential(
    nn.Flatten(), # Flatten() -> 784개 은닉 층
    nn.Linear(784, 128), # 784 * 128 Connect
    nn.ReLU(), # ReLu : 음수를 모두 0으로 만들어 줌
    nn.Dropout(p=0.2), # 20%를 임의로 선택해서 0으로 만들어 줌
    nn.Linear(128, 10), # 출력 층 128개 뉴런과 출력층 뉴런 10개를 연결
    nn.Softmax(dim=1)
)

# 인공신경망 요약
print('\nDNN 요약')
summary(model, (1, 28, 28))

# 최적화 함수와 손실 함수 지정
optimizer = torch.optim.Adam(model.parameters(), lr=0.01) # 최적화 Adam
criterion = nn.CrossEntropyLoss() # 교차 엔트로피, 손실 함수

# 인공 신경망 학습
for epoch in range(5): # 기계 학습 5번 반복
    for data in train_loader: # 데이터는 학습용 데이터를 사용 (120번 반복)
        inputs, labels = data # data 안에 담긴 데이터를 분리
        outputs = model(inputs) # 순방향으로 DNN을 계산

        # print(inputs.shape)
        # print(outputs.shape)
        # print(labels.shape)

        # 손실값 계산
        loss = criterion(outputs, labels) # 교차 엔트로피로 손실값 계산 (1개만 있음), Pytorch는 평균 손실 하나가 있음

        # print(loss.shape)
        # exit()

        # 역전파 알고리즘(Adam)으로 가중치 보정
        model.zero_grad()
        loss.backward()
        optimizer.step()

    # 손실값 출력
    print('Epoch : {},'.format(epoch),
          'Loss : {:.3f}'.format(loss.item()))

# 인공 신경망 평가
correct = 0
for images, labels in test_loader:
    with torch.no_grad(): # 기울기 연산 Skip
        pred = model(images)

    # softmax 활성화를 라벨로 전환
    pred = torch.argmax(pred, dim=1)

    # print(pred.shape)

    for i in range(500):
        if (pred[i] == labels[i]):
            correct += 1

print('Percent : ', correct / 10000)

