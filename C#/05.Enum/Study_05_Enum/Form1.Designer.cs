namespace Study_05_Enum
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
            this.tboxName = new System.Windows.Forms.TextBox();
            this.btnResult = new System.Windows.Forms.Button();
            this.btnResultStrFormat = new System.Windows.Forms.Button();
            this.tboxResult = new System.Windows.Forms.TextBox();
            this.lboxDay = new System.Windows.Forms.ListBox();
            this.lboxTime = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // tboxName
            // 
            this.tboxName.Font = new System.Drawing.Font("굴림", 14F);
            this.tboxName.Location = new System.Drawing.Point(28, 12);
            this.tboxName.Name = "tboxName";
            this.tboxName.Size = new System.Drawing.Size(152, 29);
            this.tboxName.TabIndex = 0;
            // 
            // btnResult
            // 
            this.btnResult.Font = new System.Drawing.Font("굴림", 14F);
            this.btnResult.Location = new System.Drawing.Point(28, 299);
            this.btnResult.Name = "btnResult";
            this.btnResult.Size = new System.Drawing.Size(106, 41);
            this.btnResult.TabIndex = 3;
            this.btnResult.Text = "결과보기";
            this.btnResult.UseVisualStyleBackColor = true;
            this.btnResult.Click += new System.EventHandler(this.btnResult_Click);
            // 
            // btnResultStrFormat
            // 
            this.btnResultStrFormat.Font = new System.Drawing.Font("굴림", 14F);
            this.btnResultStrFormat.Location = new System.Drawing.Point(171, 299);
            this.btnResultStrFormat.Name = "btnResultStrFormat";
            this.btnResultStrFormat.Size = new System.Drawing.Size(176, 41);
            this.btnResultStrFormat.TabIndex = 4;
            this.btnResultStrFormat.Text = "String Format Test";
            this.btnResultStrFormat.UseVisualStyleBackColor = true;
            this.btnResultStrFormat.Click += new System.EventHandler(this.btnResultStrFormat_Click);
            // 
            // tboxResult
            // 
            this.tboxResult.Enabled = false;
            this.tboxResult.Font = new System.Drawing.Font("굴림", 14F);
            this.tboxResult.Location = new System.Drawing.Point(28, 347);
            this.tboxResult.Multiline = true;
            this.tboxResult.Name = "tboxResult";
            this.tboxResult.Size = new System.Drawing.Size(466, 73);
            this.tboxResult.TabIndex = 5;
            // 
            // lboxDay
            // 
            this.lboxDay.Font = new System.Drawing.Font("굴림", 14F);
            this.lboxDay.FormattingEnabled = true;
            this.lboxDay.ItemHeight = 19;
            this.lboxDay.Location = new System.Drawing.Point(28, 58);
            this.lboxDay.Name = "lboxDay";
            this.lboxDay.Size = new System.Drawing.Size(217, 213);
            this.lboxDay.TabIndex = 6;
            // 
            // lboxTime
            // 
            this.lboxTime.Font = new System.Drawing.Font("굴림", 14F);
            this.lboxTime.FormattingEnabled = true;
            this.lboxTime.ItemHeight = 19;
            this.lboxTime.Location = new System.Drawing.Point(277, 58);
            this.lboxTime.Name = "lboxTime";
            this.lboxTime.Size = new System.Drawing.Size(217, 213);
            this.lboxTime.TabIndex = 7;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(533, 442);
            this.Controls.Add(this.lboxTime);
            this.Controls.Add(this.lboxDay);
            this.Controls.Add(this.tboxResult);
            this.Controls.Add(this.btnResultStrFormat);
            this.Controls.Add(this.btnResult);
            this.Controls.Add(this.tboxName);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tboxName;
        private System.Windows.Forms.Button btnResult;
        private System.Windows.Forms.Button btnResultStrFormat;
        private System.Windows.Forms.TextBox tboxResult;
        private System.Windows.Forms.ListBox lboxDay;
        private System.Windows.Forms.ListBox lboxTime;
    }
}

