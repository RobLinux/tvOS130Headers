/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPlainCredential : FATObject {

	NSNumber* _userId;
	NSString* _password;

}

@property (nonatomic,retain) NSNumber * userId;                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
@end
