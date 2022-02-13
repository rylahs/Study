# 파이썬 패키지 가져오기

# 사용 패키지
# numpy, matplotlib, pytorch, torchvision, torchsummary
# torchvision, torchsummary는 아직까지 pycharm에서 terminal을 통한 설치가 필요

# pip install torchvision==0.1.8 오류 발생 시 torchvision install 검색
# pip install torchsummary

import numpy as np  # 샘플 이미지 출력 , CNN 정확도 계산
import matplotlib.pyplot as plt  # 샘플 이미지 출력

from time import time  # 걸린 시간 계산
import torch  # Pytorch
from torch import nn  # 뉴런 네트워크 패키지 수입

import torchvision
import torchvision.transforms as transforms  # cifar-10 패키지 추가 처리 함수 제공
from torchvision.datasets import CIFAR10
from torch.utils.data import DataLoader  # 데이터 로더

from torchsummary import summary  # 인공 신경망을 만들 때 각각의 층의 구조와 가중치 숫자 출력

# 하이퍼 파라미터
MY_EPOCH = 2  # 총 학습 반복수

# EPOCH 2 Result
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 47.94%

# 실습 1-1
# MY_EPOCH 0으로 조절
# 기계 학습이 전혀 되지 않음
# 임의의 가중치로 순방향 계산 10개중 하나 임의 선택

# MY_EPOCH = 0

# EPOCH 0 Result
# 파라미터 수 : 245,300
# 학습 시간 : 0.0초
# 최종 정확도 : 10.33%
# 기계 학습이 되어 있지 않음


# 실습 1-2
# MY_EPOCH 20으로 조절
# Epoch 수가 증가하면 학습 효과 증가 기대
# 학습 시간도 따라서 증가
# MY_EPOCH = 20

# EPOCH 20 Result
# 파라미터 수 : 245,300
# 학습 시간 : 341.6초
#  최종 정확도 : 56.10%
#

# 실습 1 추가문제
# Epoch를 얼마로 올려야 정확도가 80% 이상이 나오는가?


MY_BATCH = 64  # 한번에 가져와서 계산할 숫자

# MY_BATCH = 64 Result
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 47.94%

# 실습 3 : Batch 조절
# 한번에 가져와서 계산하는 데이터의 양
# Batch의 크기가 작아지면 매번 계산 양이 줄어든다.
# 하지만 처리해야할 총 Batch는 증가
# 역방향 계산에 사용하는 데이터 수가 달라져서 정확도도 변화 함

# MY_BATCH = 16

# MY_BATCH = 16 Result
# 파라미터 수 : 245,300
# 학습 시간 : 46.5초
# 최종 정확도 : 49.22%

# 추가 문제 : MY_BATCH = 4

# MY_BATCH = 4
# MY_BATCH = 4 Result
# 파라미터 수 : 245,300
# 학습 시간 : 80.4초
# 최종 정확도 : 35.02%
# row[i]의 합 에러 0이 나옴


# 임의의 수 생성 씨앗 설정
torch.manual_seed(111)  # 같은 수의 임의의 수가 생성되는 방법 (CNN의 정확도가 매번 일정 해짐)

# 데이터 형변환 추가
# 목적 : 머신 러닝의 정확도와 학습 시간 최적화
# torchvision.transforms package use
# Compose 함수 안에 원하는 변환 추가

############### 데이터 준비

# 3차원 데이터 변환 방식을 지정
# 1. pytorch Tensor로 전환
# 2. [-1, 1] 정규화
mean = [0.5, 0.5, 0.5]  # 평균 값 (R, G, B) 3개의 채널
std = [0.5, 0.5, 0.5]  # 표준편차 (R, G, B) 3개의 채널
# std = [0.1, 0.1, 0.1]  # 실습 7 추가문제
rules = transforms.Compose([ # 입력 데이터에 적용하게 될 변환 도구
    transforms.ToTensor(), # PyTorch Tensor로의 전환 CIFAR-10 이미지는 numpy 형식이라 변환이 필요, CNN이 pytorch로 만들어져서
    transforms.Normalize(mean=mean, std=std)]) # 데이터 정규화, 평균, 표준편차 사용, 공식 : 주어진 화소 - 평균 / 표준편차
# 0 ~ 1 데이터로 이미 되어져 있기 때문에 이 함수로 RGB 데이터가 -1 ~ 1로 변환되게 된다.
# -1 ~ 1 정규화가 이미지 인식에 더 도움이 된다는 연구 이야기가 있다.

# rules = transforms.Compose([ # 실습 6 정규화 생략
#     transforms.ToTensor()])

# rules = transforms.Compose([  # 실습 7 랜덤 뒤집기 추가
#     transforms.RandomHorizontalFlip(),
#     transforms.ToTensor(),
#     transforms.Normalize(mean=mean, std=std)])

# 실습 6 데이터 정규화 생략
# CIFAR10 원래 이미지 화소 데이터는 [0, 1]
# TRANSFORMS PACKAGE를 사용해서 [-1, 1]로 변환
# Pytorch 가중치 초기값도 대부분 비슷한 버무이 값을 가짐 [-k, k]
# Pytorch 인공신경망은 양수와 음수가 균형을 맞춘 입력 데이터 선호

# 정규화 했던 데이터
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 47.94%

# 정규화 생략 데이터
# 파라미터 수 : 245,300
# 학습 시간 : 28.6초
# 최종 정확도 : 40.32%

# 추가 문제 Z 점수 정규화


# 데이터 로더
# Batch 처리
# CIFAR-10 데이터는 50000개 학습용 이미지 존재
# 한번에 계산은 무리가 있다.
# Batch만큼 가져와서 처리 (현재는 64)
# Shuffle 옵션 추가 가능 (섞어서 학습 가능) -> 섞으면 정확도가 높아진다는 이야기가 있다.

# 학습용 데이터 로더
train_loader = DataLoader(
    CIFAR10('cifar',  # 데이터 들어있는 폴더 이름,
            train=True,  # True : 학습용 데이터 5만개 , False : 평가용 데이터 1만개
            download=True,  # True : 컴퓨터에 저장해서 사용 False : 매번 다운로드 해서 사용
            transform=rules),  # 데이터 변환 방식 rules 사용, 변환 도구 지정
    batch_size=MY_BATCH,  # Batch size
    shuffle=True  # 셔플 여부
)

# 평가용 데이터 로더
test_loader = DataLoader(
    CIFAR10('cifar',
            train=False,  # 평가용 데이터로 설정
            download=True,
            transform=rules),
    batch_size=MY_BATCH,
    shuffle=False  # 평가용 데이터는 셔플하지 않음
)


# TorchVision 연동
# 데이터 변환 /증강 방식 적용


# 실습 7 데이터 변환 추가
# CIFAR 10 학습용 이미지 중 임의로 선택해서 뒤집음
# 사슴의 사진을 가로로 뒤집어도 사슴은 사슴
# 기계에도 숫자의 재배열일뿐
# 뒤집힌 이미지에서도 특징을 성공적으로 추출 예상
# Transforms에 RandomHorizontalFlip 함수 사용

# 원본 데이터
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 47.94%

# 가로 뒤집기 데이터
# 파라미터 수 : 245,300
# 학습 시간 : 34.7초
# 최종 정확도 : 51.5%

# 랜덤이라서 더 높아질 수도 있는 것이다. 기계는 헷갈리지 않고 잘 구분한다

# 추가 문제 std를 0.1 0.1 0.1로 변경
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 41.55%



# 이미지 출력 함수
def sample(img):  # 64개 Batch 파라미터 샘플을 띄우는 함수 8행 8열로 하나의 이미지로 통합
    # 화소 정보 [-1, 1] -> [0, 1]로 전환
    img = img / 2 + 0.5  # 복사해오기 때문에 원본은 변화 없음

    # RGB 채널 정보를 마지막으로 이동
    npimg = img.numpy()
    print('전환 전 모양:', npimg.shape)  # 32 * 8 x 32 * 8 = 256 * 256 , 3,274 , 3,274

    # pytorch : Channal First , matplot : Channel Last
    flip = np.transpose(npimg, (1, 2, 0))  # transpose : 주어진 numpy 차원의 순서를 변환
    print('전환 후 모양:', flip.shape)

    plt.imshow(flip)  # 이미지 파일 준비
    plt.axis('off')  # x,y 눈금 off
    # plt.savefig('original.png') # 실습 7용 저장 원본
    # plt.savefig('horizontal.png') # 실습 7용 저장 수직 랜덤
    # plt.show()  # 출력
    # exit()



# 샘플 이미지 출력

# 임의의 이미지 한 batch 가져오기
dataiter = iter(train_loader)  # 반복자를 사용해서 특정 순서의 데이터를 가져올 수 있다.
images, labels = dataiter.next()  # 첫번째 Batch를 가져오기 , 첫번째 : 이미지, 두번째 : 라벨

# print(images[0])
# exit()
# 정규화 된 화소 데이터
# tensor([[[ 0.7176,  0.5294, -0.2941,  ...,  0.8745,  0.8745,  0.8980],
#          [ 0.7255,  0.5216, -0.3098,  ...,  0.8510,  0.8510,  0.8745],
#          [ 0.4431,  0.0588, -0.3725,  ...,  0.8510,  0.8431,  0.8745],
#          ...,
#          [ 0.7020,  0.6471,  0.6235,  ...,  0.2392,  0.2392,  0.2235],
#          [ 0.8275,  0.7961,  0.7882,  ...,  0.2235,  0.2784,  0.2863],
#          [ 0.7490,  0.8431,  0.7882,  ...,  0.2314,  0.2784,  0.2941]],
#
#         [[ 0.6235,  0.4510, -0.3176,  ...,  0.8039,  0.8039,  0.8275],
#          [ 0.6392,  0.4275, -0.3647,  ...,  0.7804,  0.7804,  0.8039],
#          [ 0.3255, -0.0902, -0.4980,  ...,  0.7804,  0.7725,  0.7961],
#          ...,
#          [ 0.2784,  0.2392,  0.2392,  ..., -0.1059, -0.1059, -0.1216],
#          [ 0.3333,  0.3255,  0.3490,  ..., -0.1373, -0.0745, -0.0745],
#          [ 0.2863,  0.3412,  0.3176,  ..., -0.1294, -0.0902, -0.0824]],
#
#         [[ 0.3725,  0.2392, -0.4275,  ...,  0.6863,  0.6784,  0.6941],
#          [ 0.3725,  0.1843, -0.5137,  ...,  0.6627,  0.6549,  0.6784],
#          [ 0.0039, -0.3961, -0.7647,  ...,  0.6627,  0.6549,  0.6706],
#          ...,
#          [-0.3333, -0.3255, -0.2941,  ..., -0.4902, -0.4902, -0.5294],
#          [-0.3255, -0.2941, -0.2235,  ..., -0.5216, -0.4667, -0.4824],
#          [-0.3647, -0.3098, -0.2863,  ..., -0.5373, -0.5059, -0.4824]]])


print('IMG SHAPE : ', images.shape)
print('LABEL SHAPE : ', labels.shape)
print(labels[0])

# 64개 이미지를 하나로 통합 후 출력
merged = torchvision.utils.make_grid(images)
# sample(merged)


# Input   : 3 x 32 x 32 => 4 * 4 Filter
# Conv    : 6 x 29 x 29
# ReLU    : 6 x 29 x 29
# MaxPool : 6 x 14 x 14
# Conv    : 16 x 11 x 11
# ReLU    : 16 x 11 x 11

# ReLU (Rectified Linear Unit)
# Definition : F(x) = max(0, x)
# 음수를 모두 제거하는 효과
# 양수는 그대로 음수는 모두 0
# 대중적인 활성화 함수 : CNN에서 많이 쓰임
# 기울기 소실 문제가 적음

# 합성곱 필터에서 다시 ReLU를 사용하는 것은 양수 음수가 존재하므로 ReLU를 다음 합성곱에서 음수가 나오기 떄문

# PyTorch CNN을 Sequential 모델로 구현
model = nn.Sequential(

    # 첫 번째 합성곱 블럭
    nn.Conv2d(in_channels=3,  # 입력 채널 : 3 (RGB) , fixed
              out_channels=6,  # 변경할 수 있음
              # out_channels=24, # 실습 5 * 4배
              # out_channels=120, # 실습 5 * 20배
              kernel_size=4),  # 변경 가능
    # kernel_size=8), # 실습 4
    nn.ReLU(),  # 활성화 함수, 음수를 모두 제거
    nn.MaxPool2d(kernel_size=2,
                 stride=2),  # 두 숫자는 대개 같게 선언, 입력 이미지를 몇배를 줄일 지 결정

    # 두 번째 합성곱 블럭
    nn.Conv2d(in_channels=6,  # 첫 번째 out_channels와 일치 해야 됨)
              out_channels=16,
              # nn.Conv2d(in_channels=24,  # 실습 5 * 4배
              #           out_channels=64, # 실습 5 * 4배
              # nn.Conv2d(in_channels=120,  # 실습 5 * 20배
              #           out_channels=320, # 실습 5 * 200배
              kernel_size=4),
    # kernel_size=8), # 실습 4
    nn.ReLU(),

    # 실습 4 : 합성곱 필터 크기 조절
    # 합성 곱 필터는 이미지 특징 추출에서 핵심 기술
    # 필터 크기가 커지면 더 많은 특징 추출
    # 필터 안에 가중치도 증가
    # 대신 이미지 크기도 더 빨리 감소
    # CNN 후반부 크기도 축소

    # Conv Base kernel 4 * 4 / 16 * 11 * 11 Result
    # 파라미터 수 : 245,300
    # 학습 시간 : 33.5초
    # 최종 정확도 : 47.94%

    # Conv Base kernel 8 * 8 / 16 * 5 * 5 Result
    # 파라미터 수 : 66,452
    # 학습 시간 : 36.3초
    # 최종 정확도 : 42.44%

    # CNN 전반부 계산이 길기 때문에 큰 차이가 나지 않는다.

    # 추가문제 Conv 필터를 2 * 2로 변경

    # 실습 5 CNN 채널 수 조절
    # CNN 채널 수 증가 : 합성곱의 특징 추출 결과의 증가
    # 더 많은 CNN 필터를 사용하게 됨
    # CNN의 정확도 증가 예상
    # CNN 후반부로 들어가는 화소 수 증가로 CNN 규모 확대 예상

    # 채널 6, 16 인 경우
    # 파라미터 수 : 245,300
    # 학습 시간 : 33.5초
    # 최종 정확도 : 47.94%

    # 4배 증가 한 경우
    # 파라미터 수 : 966,230
    # 학습 시간 : 69.10초
    # 최종 정확도 : 53.29%

    # 20배 증가 한 경우
    # 파라미터 수 : 5,278,134
    # 학습 시간 : 412.9초
    # 최종 정확도 : 10.0%

    # 파라미터 분모가 잘못되었다 그래서 모두 비행기로 인식되었다.

    # CNN에서 채널 수의 증가는 단순히 만들어진 이미지 숫자의 증가가 아니라, 필터 수의 증가이기도 하다.
    # 정확도를 높여준다.
    # 대신 시간이 오래 걸린다.

    # SoftMax 활성화 함수
    # 출력 값들의 총 합은 항상 1로 동일
    # 분류 문제에서 많이 활용

    # DNN 블럭
    # Flatten : 1936
    # Linear  : 120
    # Linear  : 84
    # Linear  : 10
    # Softmax : 10

    nn.Flatten(),  # 16 * 11 * 11 은닉 뉴런으로 전환
    nn.Linear(in_features=16 * 11 * 11,  # 은닉층을 Linear 연결
              # nn.Linear(in_features=64 * 11 * 11, # 실습 5 : 4배
              # nn.Linear(in_features=320 * 11 * 11, # 실습 5 : 20배
              # nn.Linear(in_features=16 * 5 * 5, # kernel_size = 8
              out_features=120),
    nn.Linear(120, 84),  # 은닉층을 Linear 연결 (2번째 은닉층 , 3번째 은닉층)
    nn.Linear(84, 10),  # 은닉층을 Linear 연결 (3번째 은닉층, 출력층)
    nn.Softmax(dim=1)  # 최종 출력층 Softmax 함수 , dim 어떤 차원인지
)

print('\nCNN 요약')
summary(model, (3, 32, 32))

# Adagrad 최적화 함수 이론
# Adaptive Gradient : 학습율 자동 보정
# 가중치 보정이 잘 되면 학습율 감소
# 가중치 보정이 잘 안되면 학습율 증가
# 장점 : 이미지나 텍스트에 좋은 효과를 냄
# 단점 : 기울기 누적이 증가 -> 학습률 감소 -> 학습이 정체

# 공식은 포스팅 참고


# 원 핫 인코딩 이론
# 범주형 데이터 (Cartegorical Data) 대상
# 데이터를 하나의 정수가 아닌, 여러개의 2진수로 표현
# 메이커  숫자   One- hot
# 기아   0     [1,0,0,0]
# 현대   1     [0,1,0,0]
# 아우디 2     [0,0,1,0]
# 혼다  3      [0,0,0,1]
# 출력 데이터 라벨이 정수 일 때 사용
# Cross Entropy 손실 함수와 함께 사용

# 손실 함수
# Cross Entropy 손실 함수 이론
# 예측 값 중 정답 위치 번째만 log를 취함
# One-hot Encoding과 Softmax를 함께 사용
# 정답인 경우 : 예측값이 1이면 손실은 0
# 오답인 경우 : 예측값이 1보다 적으면 손실값은 커짐

# 다른 과정에서는 minSquare를 많이 사용함(MSE)

############### 인공 신경망 학습 ####################

# 최적화 함수와 손실 함수 지정
optimizer = torch.optim.Adagrad(
    model.parameters(), lr=0.01)
# optimizer = torch.optim.SGD(
# model.parameters(), lr=0.01)
# model.parameters(), lr=0.1)
# optimizer = torch.optim.Adam(
#     # model.parameters(), lr=0.01)
#     # model.parameters(), lr=0.1)
#     model.parameters(), lr=0.15)
criterion = nn.CrossEntropyLoss()

# Adagrad Result
# 파라미터 수 : 245,300
# 학습 시간 : 33.5초
# 최종 정확도 : 47.94%

# 실습 2 : 최적화 알고리즘 교체
# Adagrad는 SGD의 고정 학습률 개선
# 가중치 보정이 잘 되면 학습률 감소
# 가중치 보정이 안되면 학습률 증가
# 하지만 실제 효과는 실험을 해야 확인이 가능

# 예상 : 정확도 감소
# 학습시간 : 미미


# SGD Result : 0.01 에서는 에러 발생 0으로 몰리고 NAN
# 학습률 0.01
# 파라미터 수 : 245,300
# 학습 시간 :  34.3초
# 최종 정확도 : 10.2%


# SGD Result : lr값을 커스텀해서 변경해야됨
# 학습률 0.1
# 파라미터 수 : 245,300
# 학습 시간 :  34.8초
# 최종 정확도 : 33.84%

# 추가문제 : Adam으로 변경

# Adam Result : 0.01 에서는 에러 발생 0으로 몰리고 NAN
# 학습률 0.01
# 파라미터 수 : 245,300
# 학습 시간 :  34.3초
# 최종 정확도 : 10.0%

# Adam Result : 0.1로 학습률을 변경
# 학습률 0.1
# 파라미터 수 : 245,300
# 학습 시간 :  33.9초
# 최종 정확도 : 10.0%
# 위치만 변경되고 똑같다

# Adam Result : 0.15로 학습률을 변경
# 학습률 0.15
# 파라미터 수 : 245,300
# 학습 시간 :  33.4초
# 최종 정확도 : 10.0%
# 위치만 변경되고 똑같다


print(type(optimizer))
print(type(criterion))

# CNN 학습
begin = time()  # 시작 시간 기록
print('\nCNN 학습 시작')

for epoch in range(MY_EPOCH):  # 반복 학습 시작 (For Loop) 지금은 2
    batch = 0  # 현재 배치가 얼마인지 기록
    for data in train_loader:  # 학습용 데이터를 한 배치씩 가져 오는 함수
        inputs, labels = data  # 현재 배치에 있는 데이터를 입력 이미지와 라벨로 분류
        outputs = model(inputs)  # 64개의 입력 이미지를 하나하나 CNN에 넣고 순방향 계산을 진행, 출력 값을 저장

        # print(inputs.shape)
        # print(labels.shape)
        # print(outputs.shape)
        # exit()

        # 가중치 보정 방법
        # 델타값 (= 보정치)를 구해서 보정
        # 보정치는 뉴런 B의 기울기에 영향을 받음
        # 뉴런 B의 기울기는 C를 통해 계산 : 역전파가 필요

        # 손실값 계산
        loss = criterion(outputs, labels)  # 손실
        # print('  배치 : ', batch,
        #       '  손실 : {:.3f}'.format(loss.item())) # 현재 배치 정보와 손실 정보 출력 ..782 배치 사용

        # 역전파 알고리즘으로 가중치 보정
        optimizer.zero_grad()  # 기울기 0으로 초기화
        loss.backward()  # 역전파 연산 실행 (출력층 -> 입력층)
        optimizer.step()  # 기울기 보정
        batch += 1  # 배치 카운트 증가

    # 손실 값 출력
    print('EPOCH : {},'.format(epoch),  # 맨 마지막 배치의 평균 손실 출력
          '손실 : {:.3f}'.format(loss.item()))

end = time()  # 시간 기록

print('최종 학습시간 : {:.1f}초'.format(end - begin))

############### 인공 신경망 평가 ###################


# 이미지 라벨
classes = ['airplane', 'automobile', 'bird', 'cat', 'deer',
           'dog', 'frog', 'horse', 'ship', 'truck']

# 혼동 행렬 초기화
correct = 0
confusion = np.zeros([10, 10], int)  # numpy.zeros , 정수로 채우기 기본 값은 0.0

# print(confusion)

# 평가용 데이터로 CNN 평가
with torch.no_grad():  # 기울기 작업을 건너 뛰기 (메모리, 시간 절약)
    for data in test_loader:
        images, labels = data
        outputs = model(images)

        # 1차원 축으로 최대치 찾아 내기
        _, pred = torch.max(outputs, dim=1)  # 10 개 중 어떤게 제일 확률이 큰지

        # print(outputs[0]) # 첫번째 이미지의 추측 결과
        # print(pred[0]) # 3번째 카테고리로 추측

        # 혼동 행렬 업데이트
        for i, truth in enumerate(labels):  # 현재 배치의 64개 정답 정보를 하나하나 label을 따라감
            if (truth.item() == pred[i]):  # 정답과 추측값이 같다면
                correct += 1  # 1 증가
            confusion[pred[i].item(), truth.item()] += 1  # 혼동 행렬 업데이트, 행 : 추측라벨, 열 : 진실 여기에 1을 더함

# 최종 정확도 출력
print('\n최종 정확도: {:.2f}%'.format(correct / 10000 * 100))

# 카테고리별 정확도 출력
print('카테고리별 Precision:')
for i, row in enumerate(confusion):  # i : 행을 방문 , row : 행의 10개의 숫자 모두
    print('{0:10s} : {1:.1f}%'  # 정확도는 소수점 한자리로 출력
          .format(classes[i], row[i] / np.sum(
        row) * 100))  # classes[i] i번째 카테고리, 카테고리 당 정확도 (혼동행렬 사용) row[i] : i번째 열 , np.sum(row) 행의 총 합

# 혼동 행렬 출력
print('\n혼동 행렬:')
print(confusion)  # 역 대각선 숫자들이 맞는 숫자
# 예를 들면 1행의 경우 첫항이 airplane이 맞는 숫자 나머지는 airplane이라고 말한 다른 사진 숫자이다.

# 평가용 마지막 batch (16개 데이터) 결과
print('\n마지막 batch 데이터 모양:', data[0].shape)
print('예상: ', pred)
print('정답: ', labels)
