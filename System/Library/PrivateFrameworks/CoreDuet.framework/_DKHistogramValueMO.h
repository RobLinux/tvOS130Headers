/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject

@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSNumber * count; 
@property (nonatomic,retain) _DKHistogramMO * histogram; 
+(id)fetchRequest;
@end

