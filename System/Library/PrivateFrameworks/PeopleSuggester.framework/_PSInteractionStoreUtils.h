/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PSInteractionStoreUtils : NSObject
+(id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(BOOL)arg4 ;
+(id)recentInteractionsFromStore:(id)arg1 bundleIDs:(id)arg2 ;
+(id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4 ;
+(id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)interactionsMostRecentForBundleId:(id)arg1 store:(id)arg2 resultLimit:(unsigned long long)arg3 ;
+(id)interactionsContainingSearchStringInDisplayName:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 fetchLimit:(unsigned long long)arg8 ;
+(id)interactionsHyperRecentFromReferenceDate:(id)arg1 bundleIds:(id)arg2 recencyMargin:(double)arg3 store:(id)arg4 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg1 store:(id)arg2 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg1 store:(id)arg2 ;
@end

