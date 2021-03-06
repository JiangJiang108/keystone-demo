# keystone-demo
Demo host and enclave applications exercising most functionality.

This demo includes a small enclave server that is capable of remote
attestation, secure channel creation, and performing a simple
word-counting computation securely.

Please see documentation in the docs/ directory.

./quick-start.sh will clone/build all necessary components for the
demo to run in qemu if you have already built keystone and it's sdk
tests successfully.

The demo will generally work on the master branch of Keystone, but
will ALWAYS work on the dev branch. We suggest building the dev branch
of Keystone if you have any issues with the demo on master.

## Attestation Failures

It is expected that the client will reject the attestation report from
the host if you haven't regenerated the expected hashes for the SM and
eapp.

You can either use `make build-hash-using-qemu` to attempt a rebuild
with new hashes or pass the `--ignore-valid` flag to the client for
testing.
