/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CKEventMetric, NSString, CKContainer;

@interface CPLCloudKitMetric : NSObject {

	NSMutableSet* _outstandingOperations;
	CKEventMetric* _ckEventMetric;
	BOOL _submitted;
	NSString* _name;
	CKContainer* _container;
	long long _result;
	unsigned long long _outstandingBeginCount;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * resultDescription; 
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                 //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long result;                                        //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingBeginCount;              //@synthesize outstandingBeginCount=_outstandingBeginCount - In the implementation block
@property (nonatomic,readonly) BOOL submitted;                                        //@synthesize submitted=_submitted - In the implementation block
+(void)initialize;
-(NSString *)name;
-(id)description;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)redactedDescription;
-(id)initWithName:(id)arg1 ;
-(NSString *)identifier;
-(void)setError:(id)arg1 ;
-(long long)result;
-(void)end;
-(void)begin;
-(void)setResult:(long long)arg1 ;
-(void)drop;
-(BOOL)submitted;
-(void)associateWithOperation:(id)arg1 ;
-(void)associatedOperationDidComplete:(id)arg1 ;
-(unsigned long long)outstandingBeginCount;
-(void)prepareCKEventMetric:(id)arg1 ;
-(void)_submitIfNecessary;
-(NSString *)resultDescription;
@end

