//IF YOU ARE USING PYSCRIPT:

//Pyscript has trouble reading csv files so you are going to have to copy and paste your gps data into the wesite directly:

//This is an example of how you want to do this:


<!DOCTYPE html>
<html>
<head>
    <title>Google Maps CSV Plotter</title>
    <style>
        #map {
            height: 400px;
            width: 100%;
        }
    </style>
</head>
<body>
    <div id="map"></div>
    <script>
        var csvData = [
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415398, longitude: -71.126442},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415367, longitude: -71.126427},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415321, longitude: -71.126457},
    {latitude: 42.415321, longitude: -71.126457},
    {latitude: 42.415321, longitude: -71.126457},
    {latitude: 42.415321, longitude: -71.126457},
    {latitude: 42.415321, longitude: -71.126457},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415325, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415329, longitude: -71.126450},
    {latitude: 42.415318, longitude: -71.126450},
    {latitude: 42.415318, longitude: -71.126450},
    {latitude: 42.415318, longitude: -71.126450},
    {latitude: 42.415318, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415295, longitude: -71.126450},
    {latitude: 42.415226, longitude: -71.126419},
    {latitude: 42.415226, longitude: -71.126419},
    {latitude: 42.415226, longitude: -71.126419},
    {latitude: 42.415226, longitude: -71.126419},
    {latitude: 42.415249, longitude: -71.126442},
    {latitude: 42.415249, longitude: -71.126442},
    {latitude: 42.415249, longitude: -71.126442},
    {latitude: 42.415249, longitude: -71.126442},
    {latitude: 42.415260, longitude: -71.126450},
    {latitude: 42.415260, longitude: -71.126450},
    {latitude: 42.415260, longitude: -71.126450},
    {latitude: 42.415260, longitude: -71.126450},
    {latitude: 42.415260, longitude: -71.126450},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415298, longitude: -71.126465},
    {latitude: 42.415413, longitude: -71.126526},
    {latitude: 42.415413, longitude: -71.126526},
    {latitude: 42.415413, longitude: -71.126526},
    {latitude: 42.415413, longitude: -71.126526},
    {latitude: 42.415413, longitude: -71.126526},
    {latitude: 42.415440, longitude: -71.126556},
    {latitude: 42.415440, longitude: -71.126556},
    {latitude: 42.415440, longitude: -71.126556},
    {latitude: 42.415440, longitude: -71.126556},
    {latitude: 42.415440, longitude: -71.126556},
    {latitude: 42.415455, longitude: -71.126564},
    {latitude: 42.415455, longitude: -71.126564},
    {latitude: 42.415455, longitude: -71.126564},
    {latitude: 42.415455, longitude: -71.126564},
    {latitude: 42.415478, longitude: -71.126572},
    {latitude: 42.415478, longitude: -71.126572},
    {latitude: 42.415478, longitude: -71.126572},
    {latitude: 42.415478, longitude: -71.126572},
    {latitude: 42.415508, longitude: -71.126587},
    {latitude: 42.415508, longitude: -71.126587},
    {latitude: 42.415508, longitude: -71.126587},
    {latitude: 42.415508, longitude: -71.126587},
    {latitude: 42.415508, longitude: -71.126587},
    {latitude: 42.415543, longitude: -71.126602},
    {latitude: 42.415543, longitude: -71.126602},
    {latitude: 42.415543, longitude: -71.126602},
    {latitude: 42.415588, longitude: -71.126602},
    {latitude: 42.415588, longitude: -71.126602},
    {latitude: 42.415604, longitude: -71.126610},
    {latitude: 42.415604, longitude: -71.126610},
    {latitude: 42.415604, longitude: -71.126610},
    {latitude: 42.415604, longitude: -71.126610},
    {latitude: 42.415642, longitude: -71.126617},
    {latitude: 42.415642, longitude: -71.126617},
    {latitude: 42.415642, longitude: -71.126617},
    {latitude: 42.415642, longitude: -71.126617},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415661, longitude: -71.126633},
    {latitude: 42.415623, longitude: -71.126610},
    {latitude: 42.415623, longitude: -71.126610},
    {latitude: 42.415623, longitude: -71.126610},
    {latitude: 42.415607, longitude: -71.126595},
    {latitude: 42.415607, longitude: -71.126595},
    {latitude: 42.415592, longitude: -71.126587},
    {latitude: 42.415592, longitude: -71.126587},
    {latitude: 42.415592, longitude: -71.126587},
    {latitude: 42.415577, longitude: -71.126587},
    {latitude: 42.415577, longitude: -71.126587},
    {latitude: 42.415558, longitude: -71.126579},
    {latitude: 42.415558, longitude: -71.126579},
    {latitude: 42.415558, longitude: -71.126579},
    {latitude: 42.415527, longitude: -71.126556},
    {latitude: 42.415527, longitude: -71.126556},
    {latitude: 42.415527, longitude: -71.126556},
    {latitude: 42.415504, longitude: -71.126556},
    {latitude: 42.415504, longitude: -71.126556},
    {latitude: 42.415493, longitude: -71.126549},
    {latitude: 42.415493, longitude: -71.126549},
    {latitude: 42.415493, longitude: -71.126549},
    {latitude: 42.415493, longitude: -71.126549},
    {latitude: 42.415493, longitude: -71.126549},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415478, longitude: -71.126526},
    {latitude: 42.415459, longitude: -71.126488},
    {latitude: 42.415459, longitude: -71.126488}
            ];
        function initMap() {
            var map = new google.maps.Map(document.getElementById('map'), {
                zoom: 18,
                center: {lat: 42.415398, lng: -71.126442}
            });

            var bounds = new google.maps.LatLngBounds();
            csvData.forEach(function(row, index) {
                var lat = parseFloat(row.latitude);
                var lng = parseFloat(row.longitude);
                if (!isNaN(lat) && !isNaN(lng)) {
                    var marker = new google.maps.Marker({
                        position: {lat: lat, lng: lng},
                        map: map
                    });
                    bounds.extend(marker.getPosition());
                } else {
                    console.warn("Invalid data in row", index, row);
                }
            });
            
            if (!bounds.isEmpty()) {
                map.fitBounds(bounds);
            } else {
                console.warn("No valid coordinates found");
            }
        }
    </script>
    <script async defer src="https://maps.googleapis.com/maps/api/js?key=AIzaSyDcOnN8Xy9zoJxQdZc2vpYTo3FV2HEsar4&callback=initMap"></script>
</body>
</html>

Even if you arn't using pyscript, some ide's that I have used don't support csv files so you will have to use this work around