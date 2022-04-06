using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_11_StructClass
{
    public partial class Form1 : Form
    {
        struct structPlayer
        {
            public int iCount; // 몇 회 진행 중

            public int iSun; // 해에 대한 값
            public int iMoon; // 달에 대한 값
            public int iStar; // 별에 대한 값

            public int iCardSum; // 해, 달, 별을 더한 값

            public int CardSum(int iSum, int iMoon, int iStar)
            {
                return iSum + iMoon + iStar;
            }
            // 결과를 String으로 변환 ( 화면에 보여주기 위해 사용

            public string ResultText()
            {
                return string.Format($"{iCount}회 해 : {iSun} , 달 : {iMoon}, 별 : {iStar} => 합계는 {iCardSum} 입니다.");
            }
        }
        class classPlayer
        {
            public int iCount = 0; // 몇 회 진행 중

            public int iSun = 2; // 해에 대한 값
            public int iMoon = 3; // 달에 대한 값
            public int iStar = 4; // 별에 대한 값

            public int iCardSum = 5; // 해, 달, 별을 더한 값

            public int CardSum(int iSum, int iMoon, int iStar)
            {
                return iSum + iMoon + iStar;
            }
            // 결과를 String으로 변환 ( 화면에 보여주기 위해 사용

            public string ResultText()
            {
                return string.Format($"{iCount}회 해 : {iSun} , 달 : {iMoon}, 별 : {iStar} => 합계는 {iCardSum} 입니다.");
            }
        }

        structPlayer stPlayer1;
        structPlayer stPlayer2;

        Random rand = new Random();

        classPlayer clPlayer1 = new classPlayer();
        classPlayer clPlayer2 = new classPlayer();
        public Form1()
        {
            InitializeComponent();
        }

        private void pboxSun_Click(object sender, EventArgs e)
        {
            int iNumber = rand.Next(1, 21);
            if (rdoPlayer1.Checked)
            {
                stPlayer1.iSun = iNumber;
                clPlayer1.iSun = iNumber;
            }
            else
            {
                stPlayer2.iSun = iNumber;
                clPlayer2.iSun = iNumber;
            }
            Result();
        }

        private void pboxMoon_Click(object sender, EventArgs e)
        {
            int iNumber = rand.Next(1, 21);
            if (rdoPlayer1.Checked)
            {
                stPlayer1.iMoon = iNumber;
                clPlayer1.iMoon = iNumber;
            }
            else
            {
                stPlayer2.iMoon = iNumber;
                clPlayer2.iMoon = iNumber;
            }
            Result();

        }

        private void pboxStar_Click(object sender, EventArgs e)
        {
            int iNumber = rand.Next(1, 21);
            if (rdoPlayer1.Checked)
            {
                stPlayer1.iStar = iNumber;
                clPlayer1.iStar = iNumber;
            }
            else
            {
                stPlayer2.iStar = iNumber;
                clPlayer2.iStar = iNumber;
            }
            Result();

        }

        private void pboxNone_Click(object sender, EventArgs e)
        {
            // 아무것도 안하고 턴을 넘긴다. 
            Result();

        }

        private void iCheckedChange()
        {
            if(rdoPlayer1.Checked)
            {
                rdoPlayer2.Checked = true;
            }
            else
            {
                rdoPlayer1.Checked = true; 
            }
        }

        private void Result()
        {
            string strResult = string.Empty;

            if (rdoPlayer1.Checked)
            {
                stPlayer1.iCount++;
                stPlayer1.iCardSum = stPlayer1.CardSum(stPlayer1.iSun, stPlayer1.iMoon, stPlayer1.iStar);

                strResult = stPlayer1.ResultText();
                lboxResult1.Items.Add(strResult);
            }
            
            else
            {
                stPlayer2.iCount++;
                stPlayer2.iCardSum = stPlayer2.CardSum(stPlayer2.iSun, stPlayer2.iMoon, stPlayer2.iStar);

                strResult = stPlayer2.ResultText();
                lboxResult2.Items.Add(strResult);
            }
            iCheckedChange();
            if (stPlayer1.iCount >= 5 && stPlayer2.iCount >= 5)
            {
                if (stPlayer1.iCardSum > stPlayer2.iCardSum)
                    MessageBox.Show("Player1이 이겼습니다.");
                else if (stPlayer1.iCardSum < stPlayer2.iCardSum)
                    MessageBox.Show("Player2가 이겼습니다.");
                else
                    MessageBox.Show("비겼습니다.");
            }
        }

        //struct Car
        //{
        //    int wheel;
        //    int cycle;
        //    int window;
        //    int door;
        //    string name;
        //}
        //class cCar
        //{
        //    int wheel;
        //    int cycle;
        //    int window;
        //    int door;
        //    string name;
        //}
    }
}
