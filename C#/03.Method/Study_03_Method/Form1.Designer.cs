namespace Study_03_Method
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
            this.btn_plus = new System.Windows.Forms.Button();
            this.btn_minus = new System.Windows.Forms.Button();
            this.btn_mult = new System.Windows.Forms.Button();
            this.btn_div = new System.Windows.Forms.Button();
            this.txtbox_result = new System.Windows.Forms.TextBox();
            this.txtbox_num1 = new System.Windows.Forms.TextBox();
            this.txtbox_num2 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // btn_plus
            // 
            this.btn_plus.Font = new System.Drawing.Font("굴림", 18F);
            this.btn_plus.Location = new System.Drawing.Point(59, 150);
            this.btn_plus.Name = "btn_plus";
            this.btn_plus.Size = new System.Drawing.Size(63, 57);
            this.btn_plus.TabIndex = 0;
            this.btn_plus.Text = "+";
            this.btn_plus.UseVisualStyleBackColor = true;
            this.btn_plus.Click += new System.EventHandler(this.btn_plus_Click);
            // 
            // btn_minus
            // 
            this.btn_minus.Font = new System.Drawing.Font("굴림", 18F);
            this.btn_minus.Location = new System.Drawing.Point(155, 150);
            this.btn_minus.Name = "btn_minus";
            this.btn_minus.Size = new System.Drawing.Size(61, 57);
            this.btn_minus.TabIndex = 1;
            this.btn_minus.Text = "-";
            this.btn_minus.UseVisualStyleBackColor = true;
            this.btn_minus.Click += new System.EventHandler(this.btn_minus_Click);
            // 
            // btn_mult
            // 
            this.btn_mult.Font = new System.Drawing.Font("굴림", 18F);
            this.btn_mult.Location = new System.Drawing.Point(245, 150);
            this.btn_mult.Name = "btn_mult";
            this.btn_mult.Size = new System.Drawing.Size(63, 57);
            this.btn_mult.TabIndex = 2;
            this.btn_mult.Text = "*";
            this.btn_mult.UseVisualStyleBackColor = true;
            this.btn_mult.Click += new System.EventHandler(this.btn_mult_Click);
            // 
            // btn_div
            // 
            this.btn_div.Font = new System.Drawing.Font("굴림", 18F);
            this.btn_div.Location = new System.Drawing.Point(338, 150);
            this.btn_div.Name = "btn_div";
            this.btn_div.Size = new System.Drawing.Size(63, 57);
            this.btn_div.TabIndex = 3;
            this.btn_div.Text = "/";
            this.btn_div.UseVisualStyleBackColor = true;
            this.btn_div.Click += new System.EventHandler(this.btn_div_Click);
            // 
            // txtbox_result
            // 
            this.txtbox_result.Enabled = false;
            this.txtbox_result.Font = new System.Drawing.Font("굴림", 16F);
            this.txtbox_result.Location = new System.Drawing.Point(28, 31);
            this.txtbox_result.Name = "txtbox_result";
            this.txtbox_result.Size = new System.Drawing.Size(404, 32);
            this.txtbox_result.TabIndex = 5;
            this.txtbox_result.Text = "0";
            this.txtbox_result.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // txtbox_num1
            // 
            this.txtbox_num1.Font = new System.Drawing.Font("굴림", 16F);
            this.txtbox_num1.Location = new System.Drawing.Point(28, 83);
            this.txtbox_num1.Name = "txtbox_num1";
            this.txtbox_num1.Size = new System.Drawing.Size(188, 32);
            this.txtbox_num1.TabIndex = 6;
            this.txtbox_num1.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // txtbox_num2
            // 
            this.txtbox_num2.Font = new System.Drawing.Font("굴림", 16F);
            this.txtbox_num2.Location = new System.Drawing.Point(245, 83);
            this.txtbox_num2.Name = "txtbox_num2";
            this.txtbox_num2.Size = new System.Drawing.Size(188, 32);
            this.txtbox_num2.TabIndex = 7;
            this.txtbox_num2.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(464, 232);
            this.Controls.Add(this.txtbox_num2);
            this.Controls.Add(this.txtbox_num1);
            this.Controls.Add(this.txtbox_result);
            this.Controls.Add(this.btn_div);
            this.Controls.Add(this.btn_mult);
            this.Controls.Add(this.btn_minus);
            this.Controls.Add(this.btn_plus);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_plus;
        private System.Windows.Forms.Button btn_minus;
        private System.Windows.Forms.Button btn_mult;
        private System.Windows.Forms.Button btn_div;
        private System.Windows.Forms.TextBox txtbox_result;
        private System.Windows.Forms.TextBox txtbox_num1;
        private System.Windows.Forms.TextBox txtbox_num2;
    }
}

