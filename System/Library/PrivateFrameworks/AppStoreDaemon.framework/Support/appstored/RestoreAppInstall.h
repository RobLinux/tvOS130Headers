/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AppInstall.h>

@class NSNumber, NSString, NSUUID;

@interface RestoreAppInstall : AppInstall {

	BOOL _fetchLatestVersion;

}

@property (assign) BOOL fetchLatestVersion;                //@synthesize fetchLatestVersion=_fetchLatestVersion - In the implementation block
@property (readonly) NSNumber * accountID; 
@property (readonly) NSString * appleID; 
@property (readonly) NSString * bundleID; 
@property (readonly) NSNumber * downloaderID; 
@property (readonly) NSNumber * evid; 
@property (readonly) NSNumber * itemID; 
@property (readonly) NSString * storefront; 
@property (readonly) NSUUID * vid; 
+(id)defaultProperties;
-(id)description;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSNumber *)accountID;
-(id)currentError;
-(NSString *)appleID;
-(NSString *)storefront;
-(NSNumber *)downloaderID;
-(id)initWithApplicationMetadata:(id)arg1 ;
-(NSNumber *)evid;
-(id)initWithStoreMetadata:(id)arg1 ;
-(id)initWithStoreMetadata:(id)arg1 restoreType:(long long)arg2 priority:(long long)arg3 ;
-(id)_logCodeForRestoreType:(long long)arg1 ;
-(BOOL)fetchLatestVersion;
-(id)errorData;
-(NSUUID *)vid;
-(void)hardFailWithError:(id)arg1 ;
-(BOOL)isBootstrapping;
-(void)setVid:(NSUUID *)arg1 ;
-(void)softFailWithError:(id)arg1 ;
-(void)setFetchLatestVersion:(BOOL)arg1 ;
@end

