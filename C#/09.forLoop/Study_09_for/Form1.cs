using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_09_for
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnFor_Click(object sender, EventArgs e)
        {
            tBoxResult.Text = String.Empty;

            StringBuilder sb = new StringBuilder();

            int iResult = 0;
            for (int i = 1; i <= 1000; i++)
            {
                iResult += i;
                sb.Append(String.Format($"1에서 {i}까지 더하면 {iResult}\r\n"));

            }

            //for (int i = 1; i <= 5; i++)
            //{
            //    for (int j = 1; j <= 3; j++)
            //    {
            //        sb.Append(String.Format($"{i}회차 {j}스테이지 진행중 . .. ...\r\n"));
            //    }
            //}
            tBoxResult.Text = sb.ToString();
        }

        private void btnforeach_Click(object sender, EventArgs e)
        {
            tBoxResult.Text = String.Empty;
            StringBuilder sb = new StringBuilder();
            string[] strArray = { "나연", "정연", "모모", "사나", "지효", "미나", "다현", "쯔위", "채영" };

            int cnt = 1;
            foreach (string str in strArray)
            {
                sb.Append(String.Format($"{str} 선생님은 {cnt++}반 입니다.\r\n"));
            
            }

            tBoxResult.Text = sb.ToString();
        }
    }
}
