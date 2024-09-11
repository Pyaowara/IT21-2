function init() {
    var scene = new THREE.Scene();
    var box = getBox(1, 1, 1);
    box.name = 'box-1';
    scene.add(box);
    
    var camera = new THREE.PerspectiveCamera(
    50,
    window.innerWidth/window.innerHeight,
    1,
    1000
    
    );
    
    camera.rotation.x = Math.PI * (-22/180);
    camera.rotation.y = Math.PI * (10/180);
    
    camera.position.x = 1;
    camera.position.y = 2;
    camera.position.z = 5;
    
    var renderer = new THREE.WebGLRenderer();
    renderer. setSize(window. innerWidth, window. innerHeight);
    document.getElementById('webgl').appendChild(renderer.domElement);
    update(renderer, scene, camera);
}
    function getBox(w, h, d) {
    var geometry = new THREE.BoxGeometry(w, h, d);
    var material = new THREE.MeshBasicMaterial({
    color: 0x00ff00
    });
    var mesh = new THREE.Mesh(
    
    geometry,
    material
    
    );
    return mesh;
    }

function update(renderer, scene, camera) {
        renderer. render(
        scene,
        camera
        
        );
        var box = scene.getObjectByName('box-1');
        box.rotation.y += 0.001;
        box.rotation.z += 0.001;
        
        requestAnimationFrame(function() {
        update(renderer, scene, camera);
        })
        }
init();