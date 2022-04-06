namespace Study_07_Array
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.dgDay = new System.Windows.Forms.DataGridView();
            this.colDayMon = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDayTue = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDayWed = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDayThu = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDayFri = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDaySat = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colDaySun = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.lblArrayCount = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.dgDay)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(24, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(73, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "매장 방문 수";
            // 
            // dgDay
            // 
            this.dgDay.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgDay.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.colDayMon,
            this.colDayTue,
            this.colDayWed,
            this.colDayThu,
            this.colDayFri,
            this.colDaySat,
            this.colDaySun});
            this.dgDay.Location = new System.Drawing.Point(26, 29);
            this.dgDay.Name = "dgDay";
            this.dgDay.RowTemplate.Height = 23;
            this.dgDay.Size = new System.Drawing.Size(747, 161);
            this.dgDay.TabIndex = 1;
            // 
            // colDayMon
            // 
            this.colDayMon.HeaderText = "월";
            this.colDayMon.Name = "colDayMon";
            // 
            // colDayTue
            // 
            this.colDayTue.HeaderText = "화";
            this.colDayTue.Name = "colDayTue";
            // 
            // colDayWed
            // 
            this.colDayWed.HeaderText = "수";
            this.colDayWed.Name = "colDayWed";
            // 
            // colDayThu
            // 
            this.colDayThu.HeaderText = "목";
            this.colDayThu.Name = "colDayThu";
            // 
            // colDayFri
            // 
            this.colDayFri.HeaderText = "금";
            this.colDayFri.Name = "colDayFri";
            // 
            // colDaySat
            // 
            this.colDaySat.HeaderText = "토";
            this.colDaySat.Name = "colDaySat";
            // 
            // colDaySun
            // 
            this.colDaySun.HeaderText = "일";
            this.colDaySun.Name = "colDaySun";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(26, 196);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(86, 37);
            this.button1.TabIndex = 2;
            this.button1.Text = "일주일간";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(118, 196);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(86, 37);
            this.button2.TabIndex = 3;
            this.button2.Text = "이주일간";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // lblArrayCount
            // 
            this.lblArrayCount.AutoSize = true;
            this.lblArrayCount.Location = new System.Drawing.Point(225, 208);
            this.lblArrayCount.Name = "lblArrayCount";
            this.lblArrayCount.Size = new System.Drawing.Size(91, 12);
            this.lblArrayCount.TabIndex = 4;
            this.lblArrayCount.Text = "전체 자료 수 : 0";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 262);
            this.Controls.Add(this.lblArrayCount);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.dgDay);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.dgDay)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataGridView dgDay;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDayMon;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDayTue;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDayWed;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDayThu;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDayFri;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDaySat;
        private System.Windows.Forms.DataGridViewTextBoxColumn colDaySun;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Label lblArrayCount;
    }
}

