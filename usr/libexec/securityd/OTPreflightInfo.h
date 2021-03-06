/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface OTPreflightInfo : NSObject {

	NSData* _escrowedSigningSPKI;
	NSString* _bottleID;

}

@property (nonatomic,retain) NSData * escrowedSigningSPKI;              //@synthesize escrowedSigningSPKI=_escrowedSigningSPKI - In the implementation block
@property (nonatomic,retain) NSString * bottleID;                       //@synthesize bottleID=_bottleID - In the implementation block
-(NSString *)bottleID;
-(void)setBottleID:(NSString *)arg1 ;
-(void)setEscrowedSigningSPKI:(NSData *)arg1 ;
-(NSData *)escrowedSigningSPKI;
@end

