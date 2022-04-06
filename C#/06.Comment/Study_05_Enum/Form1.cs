using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Study_05_Enum
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private enum enumDay
        {
            Monday,
            Tuesday,
            Wednesday,
            Thursday,
            Friday,
            Saturday,
            Sunday,
        }

        private enum enumTime
        {
            Morning,
            Afternoon,
            Evening,
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            lboxDay.Items.Add(enumDay.Monday).ToString(); // 월요일 입니다.
            lboxDay.Items.Add(enumDay.Tuesday);
            // lboxDay.Items.Add(enumDay.Wednesday); // 수요일에는 바빠서 만날 수 없어서 임시 제거
            lboxDay.Items.Add(enumDay.Thursday);
            lboxDay.Items.Add(enumDay.Friday);
            lboxDay.Items.Add(enumDay.Saturday);
            lboxDay.Items.Add(enumDay.Sunday);

            // ListBox에 사용할 시간을 넣습니다.
            lboxTime.Items.Add(enumTime.Morning);
            lboxTime.Items.Add(enumTime.Afternoon);
            lboxTime.Items.Add(enumTime.Evening);
        }

        private void btnResult_Click(object sender, EventArgs e)
        {
            // XX와 Monday(요일) AfterNoon에 보기로 했습니다.
            string strResult = tboxName.Text + "와 " + lboxDay.SelectedItem.ToString() + "(요일) " + lboxTime.SelectedItem.ToString() + "에 보기로 했습니다.";
            tboxResult.Text = strResult;
        }

        private void btnResultStrFormat_Click(object sender, EventArgs e)
        {
            
            string strResult = TextLoad(tboxName.Text, lboxDay.SelectedItem.ToString(), lboxTime.SelectedItem.ToString());
            //String.Format("{0}와 {1}(요일) {2}에 보기로 했습니다.", tboxName.Text, lboxDay.SelectedItem.ToString(), lboxTime.SelectedItem.ToString());


            tboxResult.Text = strResult;
        }
        /// <summary>
        /// XX와 Monday(요일) AfterNoon에 보기로 했습니다. 같은 문자열을 만듭니다.
        /// </summary>
        /// <param name="strName">이름</param>
        /// <param name="strDay">날짜</param>
        /// <param name="strTime">시간</param>
        /// <returns>합친 문자열을 반환합니다.</returns>
        private string TextLoad(string strName, string strDay, string strTime)
        {
            string strText = String.Format("{0}와 {1}(요일) {2}에 보기로 했습니다.", strName, strDay, strTime);
            return "";
        }
    }
}
