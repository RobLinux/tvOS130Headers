/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PurchaseIntentDatabaseRow : NSObject {

	NSString* _productIdentifier;
	NSString* _appBundleId;
	NSNumber* _timestamp;
	NSString* _productName;
	NSString* _appName;
	NSNumber* _pid;

}

@property (nonatomic,retain) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) NSString * appBundleId;                    //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * productName;                    //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * appName;                        //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSNumber * pid;                            //@synthesize pid=_pid - In the implementation block
-(NSNumber *)timestamp;
-(NSNumber *)pid;
-(void)setPid:(NSNumber *)arg1 ;
-(NSString *)productName;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
@end

