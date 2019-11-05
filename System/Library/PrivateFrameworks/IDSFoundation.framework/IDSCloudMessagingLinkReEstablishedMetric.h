/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/CUTCoreAnalyticsMetric.h>
#import <IDSFoundation/CUTAWDMetric.h>

@class NSDictionary, NSString;

@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	double _inactiveTime;
	unsigned long long _linkType;
	unsigned long long _priorLinkType;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) double inactiveTime;                                  //@synthesize inactiveTime=_inactiveTime - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned long long priorLinkType;                     //@synthesize priorLinkType=_priorLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)linkType;
-(unsigned long long)priorLinkType;
-(double)inactiveTime;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(id)initWithInactiveTime:(double)arg1 linkType:(unsigned long long)arg2 priorLinkType:(unsigned long long)arg3 ;
@end

