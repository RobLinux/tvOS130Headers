/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/NSSecureCoding.h>

@class TIKeyboardCandidate, NSArray;

@interface TIAutocorrectionList : NSObject <NSSecureCoding> {

	BOOL _containsProactiveTriggers;
	TIKeyboardCandidate* _autocorrection;
	NSArray* _predictions;
	NSArray* _emojiList;
	NSArray* _proactiveTriggers;

}

@property (nonatomic,readonly) BOOL containsAutofillCandidates; 
@property (nonatomic,readonly) BOOL containsContinuousPathConversions; 
@property (assign,nonatomic) BOOL containsProactiveTriggers;                        //@synthesize containsProactiveTriggers=_containsProactiveTriggers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;                //@synthesize autocorrection=_autocorrection - In the implementation block
@property (nonatomic,readonly) NSArray * predictions;                               //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSArray * emojiList;                                 //@synthesize emojiList=_emojiList - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers;                         //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) BOOL shouldAcceptTopCandidate; 
+(BOOL)supportsSecureCoding;
+(id)listWithAutocorrection:(id)arg1 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 ;
+(id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
+(id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
+(id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
-(BOOL)containsAutofillCandidates;
-(BOOL)containsContinuousPathConversions;
-(void)updateLabelsWithSmartPunctuation:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)candidates;
-(id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 ;
-(id)initWithCandidates:(id)arg1 ;
-(id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2 ;
-(BOOL)shouldAcceptTopCandidate;
-(TIKeyboardCandidate *)autocorrection;
-(NSArray *)predictions;
-(NSArray *)emojiList;
-(NSArray *)proactiveTriggers;
-(BOOL)containsProactiveTriggers;
-(void)setContainsProactiveTriggers:(BOOL)arg1 ;
@end

