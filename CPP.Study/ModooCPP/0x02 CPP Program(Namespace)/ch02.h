#pragma once
namespace {
	// �� �Լ��� �� ���� �ȿ����� ����� �� �ֽ��ϴ�.
	// �̴� ��ġ static int OnlyInThisFile() �� �����մϴ�.
	int OnlyInThisFile() 
	{
		return 1;
	}

	// �� ���� ���� static int x �� �����մϴ�.
	int only_in_this_file = 0;
   // namespace
}