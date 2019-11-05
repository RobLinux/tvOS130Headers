/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <CalendarDaemon/EKPredicateEvaluating.h>
#import <CalendarDaemon/EKDefaultPropertiesLoading.h>
#import <CalendarDaemon/NSSecureCoding.h>

@class NSString;

@interface CADRespondedEventsPredicate : CADPredicate <EKPredicateEvaluating, EKDefaultPropertiesLoading, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicate;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateFormat;
-(BOOL)shouldLoadDefaultProperties;
-(id)defaultPropertiesToLoad;
@end

