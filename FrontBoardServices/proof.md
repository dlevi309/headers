WIP commit, just don't have time at the moment to properly clean the adddd headers

this info will be be added to the draft:

```js
cy# @import FrontBoardServices

cy# extern "C" NSString *NSStringFromFBSApplicationTrustState(NSInteger)
(extern "C" NSString *NSStringFromFBSApplicationTrustState(long))

cy# NSStringFromFBSApplicationTrustState(0)
@"Unknown"
cy# NSStringFromFBSApplicationTrustState(1)
@"Generic"
cy# NSStringFromFBSApplicationTrustState(2)
@"Blacklisted"
cy# NSStringFromFBSApplicationTrustState(3)
@"Profile Expired"
cy# NSStringFromFBSApplicationTrustState(4)
@"Profile Missing"
cy# NSStringFromFBSApplicationTrustState(5)
@"Profile Banned/Revoked"
cy# NSStringFromFBSApplicationTrustState(6)
@"Profile Needs Network Validation"
cy# NSStringFromFBSApplicationTrustState(7)
@"Needs Explicit User Trust"
cy# NSStringFromFBSApplicationTrustState(8)
@"Trusted"
cy# NSStringFromFBSApplicationTrustState(9)
@"Signature Version Unsupported"
```