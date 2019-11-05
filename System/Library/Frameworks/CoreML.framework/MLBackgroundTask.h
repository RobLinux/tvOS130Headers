/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/NSCopying.h>
#import <CoreML/NSSecureCoding.h>

@class NSString;

@interface MLBackgroundTask : NSObject <NSCopying, NSSecureCoding> {

	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)cancelTaskWithIdentifier:(id)arg1 ;
+(BOOL)scheduleTask:(id)arg1 ;
+(BOOL)cancelAllTasks;
+(BOOL)taskIsScheduledWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(id)activityForScheduling;
@end
