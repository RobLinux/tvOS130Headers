/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {

	NSNumber* _dsid;
	NSString* _flag;
	BOOL _enabled;

}
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(BOOL)arg3 ;
@end

