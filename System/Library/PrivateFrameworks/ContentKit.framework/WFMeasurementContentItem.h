/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <ContentKit/WFContentItemClass.h>

@class NSMeasurement;

@interface WFMeasurementContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) NSMeasurement * measurement; 
+(id)typeDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
-(NSMeasurement *)measurement;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

