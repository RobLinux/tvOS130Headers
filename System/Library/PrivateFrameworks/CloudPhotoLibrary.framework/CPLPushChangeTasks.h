/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/NSSecureCoding.h>
#import <CloudPhotoLibrary/NSCopying.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _tasksByType;
	NSMutableDictionary* _mutableTasksByType;

}

@property (nonatomic,readonly) BOOL hasTasks; 
+(BOOL)supportsSecureCoding;
+(id)descriptionForTaskType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initEmpty;
-(void)_commitTasks;
-(void)enumerateScopedTasksWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateTasksWithBlock:(/*^block*/id)arg1 ;
-(void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(BOOL)hasTasks;
-(id)_descriptionFromTasksByType:(id)arg1 ;
-(id)invalidRecordScopedIdentifiers;
-(id)invalidRecordIdentifiers;
@end

