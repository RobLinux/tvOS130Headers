/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPeopleSuggestionManagerDataSource <NSObject>
@property (assign,nonatomic) unsigned long long initialPageLimit; 
@optional
-(void)startListeningForLibraryChanges;
-(void)stopListeningForLibraryChanges;
-(unsigned long long)initialPageLimit;
-(void)setInitialPageLimit:(unsigned long long)arg1;

@required
-(id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id*)arg3;
-(id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;

@end

