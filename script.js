document.getElementById('rideForm').addEventListener('submit', function(e) {
    e.preventDefault();
    
    var pickup = document.getElementById('pickup').value;
    var dropoff = document.getElementById('dropoff').value;
    
    if (pickup && dropoff) {
      alert('Ride booked from ' + pickup + ' to ' + dropoff + '!');
      // Here, you would typically send this data to your backend API
      document.getElementById('rideForm').reset();
    } else {
      alert('Please enter both pickup and dropoff locations.');
    }
  });
  