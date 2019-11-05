/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSSecureCoding> {

	BOOL _appleIDAuth;
	BOOL _createAppleID;
	NSString* _user;
	NSString* _site;

}

@property (nonatomic,copy) NSString * user;                   //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * site;                   //@synthesize site=_site - In the implementation block
@property (assign,nonatomic) BOOL appleIDAuth;                //@synthesize appleIDAuth=_appleIDAuth - In the implementation block
@property (assign,nonatomic) BOOL createAppleID;              //@synthesize createAppleID=_createAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 site:(id)arg2 ;
-(NSString *)site;
-(void)setSite:(NSString *)arg1 ;
-(BOOL)appleIDAuth;
-(void)setAppleIDAuth:(BOOL)arg1 ;
-(BOOL)createAppleID;
-(void)setCreateAppleID:(BOOL)arg1 ;
@end

