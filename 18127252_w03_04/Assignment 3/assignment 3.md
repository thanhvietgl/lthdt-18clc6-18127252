# Vector
**Vector** là những thùng chứa các phần tử liên tiếp để tạo thành một mảng có thể thay đổi kích thước.

Cũng giống như mảng, **Vector** sử dụng các vị trí lưu trữ liền kề cho các phần tử của chúng, điều đó có nghĩa là các phần tử của chúng cũng có thể truy cập bằng cách sử dụng offset trên các con trỏ thông thường và hiệu quả như trong mảng. Nhưng không giống trong mảng, kích thước của chúng có thể thay đổi linh hoạt 
**Vector** sử dụng một mảng phân bổ động để lưu trữ các phần tử của chúng. Mảng này có thể phân bổ lại để tăng kích thước khi có phần tử mới được chèn vào. Đây là một nhiệm vụ tượng đối tốn kém về thời gian xử lý và do đó, **vector** không phân bổ lại mỗi khi một phần tử được thêm vào thùng chứa.

Do đó, so với mảng, vectơ tiêu thụ nhiều bộ nhớ hơn để đổi lấy khả năng quản lý lưu trữ và phát triển linh hoạt một cách hiệu quả.

So với các bộ chứa chuỗi động khác (deques, list và Forward_lists), **vector** rất hiệu quả khi truy cập các phần tử của nó (giống như mảng) và thêm hoặc loại bỏ các phần tử tương đối hiệu quả từ phần cuối của nó. Đối với các hoạt động liên quan đến việc chèn hoặc xóa các phần tử tại các vị trí không phải là điểm cuối, chúng hoạt động kém hơn các phần tử khác và có các trình lặp và tham chiếu ít nhất quán hơn so với danh sách và chuyển tiếp.

*Ví dụ:*
int n;
vector <int > a;
cout<<"\nInput the number of member: ";
cin>>n;
for(int i=0;i<n;i++)
{
	a.push_back(i);
}
