using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Study_12_StructClass
{
    class CPlayer
    {
        int iTest = 0;
        public CPlayer()
        {
            iTest = 1;
        }
        ~CPlayer()
        {
            iTest = 0;
        }
        //public int iCount = 0; // 몇 회 진행 중

        //public int iSun = 0; // 해에 대한 값
        //public int iMoon = 0; // 달에 대한 값
        //public int iStar = 0; // 별에 대한 값

        public int iCardSum = 0; // 해, 달, 별을 더한 값

        public int CardSum(int iSun, int iMoon, int iStar)
        {
            return iSun + iMoon + iStar;
        }
        // 결과를 String으로 변환 ( 화면에 보여주기 위해 사용

        public string ResultText(int iCount, int iSun, int iMoon, int iStar, int iCardSum)
        {
            return string.Format($"{iCount}회 해 : {iSun} , 달 : {iMoon}, 별 : {iStar} => 합계는 {iCardSum} 입니다.");
        }

        public string PlayerPair(int iCount, int iP1CardSum, int iP2CardSum)
        {
            int iCheck = iP1CardSum - iP2CardSum;
            
            if (iCheck > 0)
            {
                return string.Format($"{iCount}회차 : Player 1이 {iCheck} 만큼 더 큽니다.");
            }
            else if (iCheck < 0)
            {
                return string.Format($"{iCount}회차 : Player 2가 {Math.Abs(iCheck)} 만큼 더 큽니다.");
            }
            else
                return string.Format($"{iCount}회차 : Player 1과 Player 2의 값이 같습니다.");
        }

        public string PlayerResult(int iP1CardSum, int iP2CardSum)
        {
           string strReturn = string.Empty;

            if (iP1CardSum > iP2CardSum)
            {
                strReturn = "Player 1이 이겼습니다.";
            }
            else if (iP2CardSum > iP1CardSum)
            {
                strReturn = "Player 2가 이겼습니다.";
            }
            else
                strReturn = "비겼습니다.";

            return strReturn;
        }
    }
}
