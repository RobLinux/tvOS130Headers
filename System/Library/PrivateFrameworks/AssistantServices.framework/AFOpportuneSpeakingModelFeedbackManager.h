/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {

	AFOpportuneSpeakingModelFeedback* _feedback;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSMutableDictionary* _usageEventsBySpeakableId;

}
-(id)init;
-(void)save;
-(void)loadIfNecessary;
-(id)lastNegativeFeedbackForContact:(id)arg1 ;
-(void)setLastNegativeFeedbackForContact:(id)arg1 ;
-(void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)interactionDetectedForSpeakableId:(id)arg1 ;
@end
