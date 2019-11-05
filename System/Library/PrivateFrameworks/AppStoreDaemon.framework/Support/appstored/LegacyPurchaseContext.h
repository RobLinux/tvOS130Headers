/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, ASDPurchase, AMSPurchase, NSDictionary;

@interface LegacyPurchaseContext : NSObject {

	BOOL _createsInstallJobs;
	BOOL _hasMIDBasedDsid;
	BOOL _hasMIDBasedApp;
	BOOL _hasProfileValidatedApp;
	BOOL _isInstalled;
	BOOL _isCompatibilityUpdate;
	BOOL _isPrivate;
	BOOL _isProvisionedApp;
	BOOL _isRedownload;
	BOOL _isRefresh;
	BOOL _isUniversalVariant;
	BOOL _isUpdate;
	BOOL _isUserInitiated;
	NSNumber* _automaticType;
	NSNumber* _accountID;
	NSString* _accountName;
	NSString* _bundleID;
	NSString* _clientBundleID;
	ASDPurchase* _externalPurchase;
	NSNumber* _familyPurchaserDSID;
	NSNumber* _itemID;
	NSString* _installedVariantID;
	NSNumber* _installedVersionID;
	NSNumber* _priority;
	AMSPurchase* _purchase;
	NSNumber* _purchaseID;
	NSNumber* _purchaserDSID;
	NSDictionary* _responseMetrics;
	long long _storefront;
	NSDictionary* _transactionIDs;
	NSString* _vendorName;

}

@property (nonatomic,copy) NSNumber * automaticType;                      //@synthesize automaticType=_automaticType - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                          //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * accountName;                        //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                     //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) BOOL createsInstallJobs;                     //@synthesize createsInstallJobs=_createsInstallJobs - In the implementation block
@property (nonatomic,retain) ASDPurchase * externalPurchase;              //@synthesize externalPurchase=_externalPurchase - In the implementation block
@property (nonatomic,retain) NSNumber * familyPurchaserDSID;              //@synthesize familyPurchaserDSID=_familyPurchaserDSID - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL hasMIDBasedDsid;                        //@synthesize hasMIDBasedDsid=_hasMIDBasedDsid - In the implementation block
@property (assign,nonatomic) BOOL hasMIDBasedApp;                         //@synthesize hasMIDBasedApp=_hasMIDBasedApp - In the implementation block
@property (assign,nonatomic) BOOL hasProfileValidatedApp;                 //@synthesize hasProfileValidatedApp=_hasProfileValidatedApp - In the implementation block
@property (nonatomic,retain) NSString * installedVariantID;               //@synthesize installedVariantID=_installedVariantID - In the implementation block
@property (nonatomic,retain) NSNumber * installedVersionID;               //@synthesize installedVersionID=_installedVersionID - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                            //@synthesize isInstalled=_isInstalled - In the implementation block
@property (assign,nonatomic) BOOL isCompatibilityUpdate;                  //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) BOOL isPrivate;                              //@synthesize isPrivate=_isPrivate - In the implementation block
@property (assign,nonatomic) BOOL isProvisionedApp;                       //@synthesize isProvisionedApp=_isProvisionedApp - In the implementation block
@property (assign,nonatomic) BOOL isRedownload;                           //@synthesize isRedownload=_isRedownload - In the implementation block
@property (assign,nonatomic) BOOL isRefresh;                              //@synthesize isRefresh=_isRefresh - In the implementation block
@property (assign,nonatomic) BOOL isUniversalVariant;                     //@synthesize isUniversalVariant=_isUniversalVariant - In the implementation block
@property (assign,nonatomic) BOOL isUpdate;                               //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign,nonatomic) BOOL isUserInitiated;                        //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,copy) NSNumber * priority;                           //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) AMSPurchase * purchase;                      //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,retain) NSNumber * purchaseID;                       //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,retain) NSNumber * purchaserDSID;                    //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,retain) NSDictionary * responseMetrics;              //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (assign,nonatomic) long long storefront;                        //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,retain) NSDictionary * transactionIDs;               //@synthesize transactionIDs=_transactionIDs - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                         //@synthesize vendorName=_vendorName - In the implementation block
-(id)description;
-(id)init;
-(NSNumber *)priority;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSString *)vendorName;
-(NSNumber *)itemID;
-(NSNumber *)purchaserDSID;
-(BOOL)isUserInitiated;
-(BOOL)isInstalled;
-(NSNumber *)accountID;
-(NSString *)accountName;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(BOOL)isUpdate;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(BOOL)isPrivate;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(AMSPurchase *)purchase;
-(BOOL)createsInstallJobs;
-(void)setCreatesInstallJobs:(BOOL)arg1 ;
-(NSDictionary *)responseMetrics;
-(id)initWithPurchase:(id)arg1 ;
-(void)setStorefront:(long long)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
-(long long)storefront;
-(void)setIsInstalled:(BOOL)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
-(BOOL)isRedownload;
-(void)setIsRedownload:(BOOL)arg1 ;
-(BOOL)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(BOOL)arg1 ;
-(BOOL)isRefresh;
-(void)setIsRefresh:(BOOL)arg1 ;
-(void)setResponseMetrics:(NSDictionary *)arg1 ;
-(void)setIsPrivate:(BOOL)arg1 ;
-(NSNumber *)automaticType;
-(void)setAutomaticType:(NSNumber *)arg1 ;
-(ASDPurchase *)externalPurchase;
-(void)setExternalPurchase:(ASDPurchase *)arg1 ;
-(NSNumber *)familyPurchaserDSID;
-(void)setFamilyPurchaserDSID:(NSNumber *)arg1 ;
-(BOOL)hasMIDBasedDsid;
-(void)setHasMIDBasedDsid:(BOOL)arg1 ;
-(BOOL)hasMIDBasedApp;
-(void)setHasMIDBasedApp:(BOOL)arg1 ;
-(BOOL)hasProfileValidatedApp;
-(void)setHasProfileValidatedApp:(BOOL)arg1 ;
-(NSString *)installedVariantID;
-(void)setInstalledVariantID:(NSString *)arg1 ;
-(NSNumber *)installedVersionID;
-(void)setInstalledVersionID:(NSNumber *)arg1 ;
-(BOOL)isProvisionedApp;
-(void)setIsProvisionedApp:(BOOL)arg1 ;
-(BOOL)isUniversalVariant;
-(void)setIsUniversalVariant:(BOOL)arg1 ;
-(NSDictionary *)transactionIDs;
-(void)setTransactionIDs:(NSDictionary *)arg1 ;
@end
