/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, KTSignedMutationTimestamp;

@interface KTSMTFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (nonatomic,retain) KTSignedMutationTimestamp * smt; 
+(id)fetchRequest;
@end

