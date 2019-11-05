/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionXPCProtocol
@required
-(void)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 reply:(/*^block*/id)arg3;
-(void)adviseInteractionsUsingSettings:(id)arg1 reply:(/*^block*/id)arg2;
-(void)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 reply:(/*^block*/id)arg3;
-(void)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 reply:(/*^block*/id)arg3;
-(void)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 reply:(/*^block*/id)arg4;
-(void)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 reply:(/*^block*/id)arg3;
-(void)recordInteractions:(id)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)countInteractionsUsingPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)countContactsUsingPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)deleteInteractionsWithBundleId:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 reply:(/*^block*/id)arg3;
-(void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(void)suggestInteractionsFromContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)shareExtensionSuggestionsFromContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)mapsSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(/*^block*/id)arg3;
-(void)messagesZKWSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rankedContactSuggestionsFromContext:(id)arg1 contactsOnly:(BOOL)arg2 maxSuggestions:(id)arg3 reply:(/*^block*/id)arg4;
-(void)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 reply:(/*^block*/id)arg3;

@end

