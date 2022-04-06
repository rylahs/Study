using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_07_Array
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            ArrayTest();
            ArrayClassTest();
        }

        private void ArrayTest()
        {
            /*
            int iDay1 = 0;
            int iDay2 = 0;
            int iDay3 = 0;
            */
            int[] iArrayTest1 = { 1, 2, 3, 4, 5 };

            string strT1 = "가,나,다,라";
            string[] strTest = strT1.Split(',');
            string[] strTestArray = { "가", "나", "다", "라" };

            int[] iArrayTest2 = new int[5] { 1, 2, 3, 4, 5 };

            int[] iArrayTest3 = new int[5];
            iArrayTest3[2] = 3;
            iArrayTest3[4] = 5;

            int[,] ArrayTest4 = new int[2, 4] { { 1, 2, 3, 4 }, { 10, 20, 30, 40 } };
        }

        private void ArrayClassTest()
        {
            int[] iTest = { 10, 20, 30, 40, 50 };

            int i = iTest.Length;

            Array.Clear(iTest, 2, 2); // 10 20 0 0 50
            Array.Resize(ref iTest, 10);

            int iSearch50 = Array.IndexOf(iTest, 50); // 4

        }

        private void button1_Click(object sender, EventArgs e)
        {
            dgDay.Rows.Clear();
            int[] iTest = { 10, 5, 30, 4, 15, 22, 18 };
            lblArrayCount.Text = String.Format($"전체 자료수 : {iTest.Length.ToString()}");
            dgDay["colDayMon", 0].Value = iTest[0];
            dgDay["colDayTue", 0].Value = iTest[1];
            dgDay["colDayWed", 0].Value = iTest[2];
            dgDay["colDayThu", 0].Value = iTest[3];
            dgDay["colDayFri", 0].Value = iTest[4];
            dgDay["colDaySat", 0].Value = iTest[5];
            dgDay["colDaySun", 0].Value = iTest[6];
        }

        private void button2_Click(object sender, EventArgs e)
        {
            dgDay.Rows.Clear();
            int[,] iTest = { { 10, 5, 30, 4, 15, 22, 18 }, { 11, 15, 25, 14, 7, 5, 25 } };
            lblArrayCount.Text = String.Format($"전체 자료수 : {iTest.Length.ToString()}");
            dgDay.Rows.Add();
            dgDay["colDayMon", 0].Value = iTest[0, 0];
            dgDay["colDayTue", 0].Value = iTest[0, 1];
            dgDay["colDayWed", 0].Value = iTest[0, 2];
            dgDay["colDayThu", 0].Value = iTest[0, 3];
            dgDay["colDayFri", 0].Value = iTest[0, 4];
            dgDay["colDaySat", 0].Value = iTest[0, 5];
            dgDay["colDaySun", 0].Value = iTest[0, 6];
            
            dgDay["colDayMon", 1].Value = iTest[1, 0];
            dgDay["colDayTue", 1].Value = iTest[1, 1];
            dgDay["colDayWed", 1].Value = iTest[1, 2];
            dgDay["colDayThu", 1].Value = iTest[1, 3];
            dgDay["colDayFri", 1].Value = iTest[1, 4];
            dgDay["colDaySat", 1].Value = iTest[1, 5];
            dgDay["colDaySun", 1].Value = iTest[1, 6];
        }
    }
}
