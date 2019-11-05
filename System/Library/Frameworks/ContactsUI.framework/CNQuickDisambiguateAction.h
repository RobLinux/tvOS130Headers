/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction {

	BOOL _ignoreMainAction;
	NSOrderedSet* _actions;
	CNQuickAction* _mainAction;

}

@property (nonatomic,retain) NSOrderedSet * actions;                         //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) CNQuickAction * mainAction;              //@synthesize mainAction=_mainAction - In the implementation block
@property (assign,nonatomic) BOOL ignoreMainAction;                          //@synthesize ignoreMainAction=_ignoreMainAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSOrderedSet *)actions;
-(void)setActions:(NSOrderedSet *)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(void)setMainAction:(CNQuickAction *)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(CNQuickAction *)mainAction;
-(BOOL)ignoreMainAction;
-(void)setIgnoreMainAction:(BOOL)arg1 ;
@end

