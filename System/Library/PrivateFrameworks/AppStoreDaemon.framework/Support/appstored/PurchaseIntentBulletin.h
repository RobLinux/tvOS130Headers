/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Bulletin.h>

@class NSString;

@interface PurchaseIntentBulletin : Bulletin {

	NSString* _appBundleId;

}

@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
-(id)init;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)newBulletinRequest;
-(id)initWithBulletinDictionary:(id)arg1 ;
-(id)copyBulletinDictionary;
@end

