/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/NSCopying.h>
#import <WorkflowKit/NSSecureCoding.h>

@interface WFRecordDescriptor : NSObject <NSCopying, NSSecureCoding> {

	Class _recordClass;

}

@property (nonatomic,readonly) Class recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)recordClass;
-(id)initWithRecordClass:(Class)arg1 ;
@end

