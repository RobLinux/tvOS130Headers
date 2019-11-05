/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class PBOpenApplicationRequest, PBRestrictionServiceRequest;

@interface PBOpenAppRestrictionTransaction : BSTransaction {

	PBOpenApplicationRequest* _openRequest;
	unsigned long long _restrictionValue;
	PBRestrictionServiceRequest* _restrictionRequest;

}

@property (assign,nonatomic) unsigned long long restrictionValue;                             //@synthesize restrictionValue=_restrictionValue - In the implementation block
@property (nonatomic,readonly) PBRestrictionServiceRequest * restrictionRequest;              //@synthesize restrictionRequest=_restrictionRequest - In the implementation block
@property (nonatomic,readonly) PBOpenApplicationRequest * openRequest;                        //@synthesize openRequest=_openRequest - In the implementation block
-(void)_begin;
-(id)initWithRequest:(id)arg1 ;
-(PBOpenApplicationRequest *)openRequest;
-(BOOL)_needsUI;
-(void)setRestrictionValue:(unsigned long long)arg1 ;
-(unsigned long long)restrictionValue;
-(PBRestrictionServiceRequest *)restrictionRequest;
@end

