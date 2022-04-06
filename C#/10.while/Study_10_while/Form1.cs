using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_10_while
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnwhileResult_Click(object sender, EventArgs e)
        {
            // 1 ~ 45 6개 번호
            //List<int> list = new List<int>();
            int[] iArray = new int[6];
            int iCount = 0;

            StringBuilder sb = new StringBuilder();

            Random rand = new Random();
            
            // iArray가 다 안차면 계속 진행
            while (Array.IndexOf(iArray, 0) != -1)
            {
                int iNumber = rand.Next(1, 46); // 1 <= iNumber < 46
                if (Array.IndexOf(iArray, iNumber) == -1)
                {
                    iArray[iCount] = iNumber;
                    iCount++;
                }
            }
            // 배열 Sort
            Array.Sort(iArray);
            // 배열에 있는 값을 문자로
            for (int i = 0; i < iArray.Length; i++)
                sb.Append(string.Format($"{iArray[i]}. "));

            lblwhileResult.Text = sb.ToString();
            lboxwhileResult.Items.Add(sb.ToString());
        }

        private void btndoWhileResult_Click(object sender, EventArgs e)
        {
            Random rand = new Random();
            int iNumber = int.Parse(tboxNumber.Text);

            if (iNumber < 1 || iNumber > 100)
            {
                MessageBox.Show("1 ~ 100 사이의 숫자를 지정해 주세요.");
                return;
            }
            int iCheckNumber = 0;
            int iCount = 0;

            do
            {
                iCheckNumber = rand.Next(1, 101);
                iCount++;

            } while (iNumber != iCheckNumber);

            lbldoWhileResult.Text = string.Format($"- 뽑은 숫자 {iNumber}을 {iCount}회 만에 찾았습니다.");
        }
    }
}
