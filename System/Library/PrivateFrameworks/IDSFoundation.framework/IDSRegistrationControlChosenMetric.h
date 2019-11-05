/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/CUTAWDMetric.h>

@class NSString;

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric> {

	long long _registrationType;
	long long _registrationControlStatus;
	BOOL _isInterestingRegion;

}

@property (nonatomic,readonly) long long registrationType;                       //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) long long registrationControlStatus;              //@synthesize registrationControlStatus=_registrationControlStatus - In the implementation block
@property (nonatomic,readonly) BOOL isInterestingRegion;                         //@synthesize isInterestingRegion=_isInterestingRegion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (readonly) PBCodable*<NSCopying> awdRepresentation; 
-(NSString *)name;
-(long long)registrationType;
-(long long)registrationControlStatus;
-(BOOL)isInterestingRegion;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(id)initWithRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(BOOL)arg3 ;
@end

