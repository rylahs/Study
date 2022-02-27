using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_03_Method
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btn_plus_Click(object sender, EventArgs e)
        {
            int num_a = int.Parse(txtbox_num1.Text);
            int num_b = int.Parse(txtbox_num2.Text);

            txtbox_result.Text = calcPlus(num_a, num_b).ToString();
        }

        private void btn_minus_Click(object sender, EventArgs e)
        {
            int num_a = int.Parse(txtbox_num1.Text);
            int num_b = int.Parse(txtbox_num2.Text);

            
            txtbox_result.Text = calcMinus(num_a, num_b).ToString();
        }

        private void btn_mult_Click(object sender, EventArgs e)
        {
            int num_a = int.Parse(txtbox_num1.Text);
            int num_b = int.Parse(txtbox_num2.Text);

            txtbox_result.Text = calcMult(num_a, num_b).ToString();
        }

        private void btn_div_Click(object sender, EventArgs e)
        {
            int num_a = int.Parse(txtbox_num1.Text);
            int num_b = int.Parse(txtbox_num2.Text);

            
            
            txtbox_result.Text = calcDiv(num_a, num_b).ToString();
        }

        private int calcPlus(int iA, int iB)
        {
            int iResult = iA + iB;
            return iResult;
        }

        private int calcMinus(int iA, int iB)
        {
            int iResult = iA - iB;
            return iResult;
        }

        private int calcMult(int iA, int iB)
        {
            int iResult = iA * iB;
            return iResult;
        }

        private int calcDiv(int iA, int iB)
        {
            int iResult = iA / iB;
            return iResult;
        }
    }
}
