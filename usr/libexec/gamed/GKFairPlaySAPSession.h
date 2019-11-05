/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <gamed/gamed-Structs.h>
@class NSString;

@interface GKFairPlaySAPSession : NSObject {

	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;
	NSString* _SAPVersion;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (setter=APVersion,retain) NSString * SAPVersion;                   //@synthesize SAPVersion=_SAPVersion - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(NSString *)SAPVersion;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(void)setSAPVersion:(NSString *)arg1 ;
-(id)signatureForData:(id)arg1 error:(id*)arg2 ;
-(id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureStringForData:(id)arg1 error:(id*)arg2 ;
@end

