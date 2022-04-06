namespace Study_09_for
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
            this.tBoxResult = new System.Windows.Forms.TextBox();
            this.btnFor = new System.Windows.Forms.Button();
            this.btnforeach = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // tBoxResult
            // 
            this.tBoxResult.Location = new System.Drawing.Point(12, 15);
            this.tBoxResult.Multiline = true;
            this.tBoxResult.Name = "tBoxResult";
            this.tBoxResult.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.tBoxResult.Size = new System.Drawing.Size(335, 413);
            this.tBoxResult.TabIndex = 0;
            // 
            // btnFor
            // 
            this.btnFor.Location = new System.Drawing.Point(379, 15);
            this.btnFor.Name = "btnFor";
            this.btnFor.Size = new System.Drawing.Size(127, 63);
            this.btnFor.TabIndex = 1;
            this.btnFor.Text = "for Loop";
            this.btnFor.UseVisualStyleBackColor = true;
            this.btnFor.Click += new System.EventHandler(this.btnFor_Click);
            // 
            // btnforeach
            // 
            this.btnforeach.Location = new System.Drawing.Point(379, 95);
            this.btnforeach.Name = "btnforeach";
            this.btnforeach.Size = new System.Drawing.Size(127, 63);
            this.btnforeach.TabIndex = 2;
            this.btnforeach.Text = "foreach Loop";
            this.btnforeach.UseVisualStyleBackColor = true;
            this.btnforeach.Click += new System.EventHandler(this.btnforeach_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(537, 450);
            this.Controls.Add(this.btnforeach);
            this.Controls.Add(this.btnFor);
            this.Controls.Add(this.tBoxResult);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tBoxResult;
        private System.Windows.Forms.Button btnFor;
        private System.Windows.Forms.Button btnforeach;
    }
}

