🚗 CarpoolConnect
CarpoolConnect is a smart and secure carpooling platform designed to connect commuters with similar routes, reduce travel costs, and promote eco-friendly transportation. It enables users to find, offer, and manage carpool rides within their community or organization.

✅ Features
✔️ Find Rides – Search and join carpool rides based on route, time, and preferences

✔️ Offer Rides – Post your own ride offers and manage available seats

✔️ Smart Matching – Suggests carpool matches using route and time proximity

✔️ Chat Integration – Secure messaging system to communicate with co-riders

✔️ User Profiles – Verified and reviewed user profiles for added trust

✔️ Eco Tracker – Tracks carbon savings for users who carpool regularly

🛠️ Tech Stack
Layer	Technology
Frontend	HTML, CSS, JavaScript
Backend	Flask (Python)
Database	SQLite (upgradable to PostgreSQL)
APIs	Google Maps API (for routes & distance)
Storage	Local (switching to cloud for deployment)

🧩 Installation
📁 Clone the Repo
bash
Copy
Edit
git clone https://github.com/your-username/CarpoolConnect.git
cd CarpoolConnect
⚙️ Set Up Environment
Create a virtual environment and activate it

bash
Copy
Edit
python -m venv venv
source venv/bin/activate
Install dependencies

bash
Copy
Edit
pip install -r requirements.txt
Run the App

bash
Copy
Edit
flask run
Open in browser → http://127.0.0.1:5000

📁 Project Structure
pgsql
Copy
Edit
CarpoolConnect/
│
├── app.py
├── templates/
│   ├── index.html
│   ├── dashboard.html
│   ├── ride_offer.html
│   ├── ride_search.html
│   └── profile.html
├── static/
│   ├── styles.css
│   └── script.js
├── models/
│   ├── user.py
│   ├── ride.py
│   └── message.py
├── utils/
│   └── maps_api.py
├── requirements.txt
├── README.md
└── .gitignore
🚀 Usage
Home Page: Browse available rides and announcements

Login/Register: Secure user registration with email verification

Search Ride: Enter pickup and destination to find matching rides

Offer Ride: Create a ride with date, time, and seat availability

Messaging: Communicate with ride sharers in a secure chat room

Eco Tracker: See your carbon savings from carpooling

🙌 Future Improvements
Mobile app version using React Native

Real-time location tracking of rides

In-app payments for ride cost sharing

Ride rating and review system

