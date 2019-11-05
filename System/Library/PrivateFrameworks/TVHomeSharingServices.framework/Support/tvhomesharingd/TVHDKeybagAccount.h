/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHDAuthorizedAccount;

@interface TVHDKeybagAccount : NSObject {

	TVHDAuthorizedAccount* _account;
	unsigned long long _keybagState;

}

@property (nonatomic,retain) TVHDAuthorizedAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) unsigned long long keybagState;               //@synthesize keybagState=_keybagState - In the implementation block
-(id)description;
-(TVHDAuthorizedAccount *)account;
-(void)setAccount:(TVHDAuthorizedAccount *)arg1 ;
-(unsigned long long)keybagState;
-(void)setKeybagState:(unsigned long long)arg1 ;
@end
