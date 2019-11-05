/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {

	MobileCalDAVAccount* _account;
	NSURL* _address;

}

@property (nonatomic,copy) NSURL * address;                                     //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;              //@synthesize account=_account - In the implementation block
+(id)userAddress:(id)arg1 forAccount:(id)arg2 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2 ;
-(id)description;
-(NSURL *)address;
-(id)dictionaryRepresentation;
-(void)setAddress:(NSURL *)arg1 ;
-(MobileCalDAVAccount *)account;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
@end
