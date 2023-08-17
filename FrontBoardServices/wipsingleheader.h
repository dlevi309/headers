typedef NS_ENUM(NSInteger, FBSApplicationTrustState) {
    FBSApplicationTrustStateGeneric = 1,
    FBSApplicationTrustStateBlacklisted,
    FBSApplicationTrustStateProfileExpired,
    FBSApplicationTrustStateProfileMissing,
    FBSApplicationTrustStateProfileRevoked,
    FBSApplicationTrustStateProfileNeedsNetworkValidation,
    FBSApplicationTrustStateNeedsExplicitUserTrust,
    FBSApplicationTrustStateTrusted,
    FBSApplicationTrustStateSignatureVersionUnsupported
};￼

@interface FBSApplicationTrustDataProvider : NSObject

@property (assign, nonatomic) FBSApplicationTrustState trustStateForApplication;

@end
