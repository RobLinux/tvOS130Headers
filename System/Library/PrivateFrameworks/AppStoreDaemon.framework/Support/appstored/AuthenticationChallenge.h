/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLAuthenticationChallenge, NSString;

@interface AuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;
	NSString* _user;

}

@property (nonatomic,retain) NSString * localizedMessage;              //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,retain) NSString * localizedTitle;                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * user;                          //@synthesize user=_user - In the implementation block
+(id)_messageForProtectionSpace:(id)arg1 ;
+(id)_titleForProtectionSpace:(id)arg1 ;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedMessage;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)setLocalizedMessage:(NSString *)arg1 ;
@end

