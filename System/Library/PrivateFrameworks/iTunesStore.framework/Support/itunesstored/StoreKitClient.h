/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface StoreKitClient : NSObject {

	BOOL _useSandbox;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _localizedName;
	long long _storeExternalVersionID;
	long long _storeItemID;

}

@property (nonatomic,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                      //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) long long storeExternalVersionID;              //@synthesize storeExternalVersionID=_storeExternalVersionID - In the implementation block
@property (nonatomic,readonly) long long storeItemID;                         //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,readonly) BOOL useSandbox;                               //@synthesize useSandbox=_useSandbox - In the implementation block
+(void)initialize;
+(void)forceSandboxForBundleIentifier:(id)arg1 untilDate:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)bundleID;
-(id)initWithApplicationProxy:(id)arg1 ;
-(NSString *)bundleVersion;
-(long long)storeItemID;
-(long long)storeExternalVersionID;
-(BOOL)useSandbox;
@end

