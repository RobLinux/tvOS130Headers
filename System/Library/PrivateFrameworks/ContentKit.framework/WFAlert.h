/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFPresentedAlert;
#import <ContentKit/ContentKit-Structs.h>
@class NSString, NSMutableArray, WFAlertButton, NSArray, WFAlertPresentationSource, UIView, NSError;

@interface WFAlert : NSObject {

	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	id<WFPresentedAlert> _presentedAlert;
	NSMutableArray* _mutableButtons;
	NSMutableArray* _mutableTextFieldConfigurationHandlers;

}

@property (nonatomic,readonly) WFAlertButton * escapeButton; 
@property (nonatomic,readonly) NSArray * textFieldConfigurationHandlers; 
@property (nonatomic,retain) WFAlertPresentationSource * presentationSource; 
@property (assign,nonatomic) BOOL adaptsToAlertStyleIfPopoverNecessary; 
@property (assign,nonatomic) BOOL prefersItemPickerSheetPresentation; 
@property (nonatomic,retain) UIView * contentView; 
@property (assign,nonatomic) UIEdgeInsets contentViewPadding; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,readonly) NSError * associatedError; 
@property (nonatomic,retain) NSMutableArray * mutableButtons;                                     //@synthesize mutableButtons=_mutableButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTextFieldConfigurationHandlers;              //@synthesize mutableTextFieldConfigurationHandlers=_mutableTextFieldConfigurationHandlers - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                            //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,copy) NSArray * buttons; 
@property (assign,nonatomic,__weak) id<WFPresentedAlert> presentedAlert;                          //@synthesize presentedAlert=_presentedAlert - In the implementation block
+(id)alertWithPreferredStyle:(long long)arg1 ;
+(id)alertWithError:(id)arg1 confirmationHandler:(/*^block*/id)arg2 ;
+(id)alertWithError:(id)arg1 ;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)keyCommands;
-(void)setMessage:(NSString *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)addKeyCommand:(id)arg1 ;
-(void)addButton:(id)arg1 ;
-(long long)preferredStyle;
-(void)setPrefersItemPickerSheetPresentation:(BOOL)arg1 ;
-(void)setPresentationSource:(WFAlertPresentationSource *)arg1 ;
-(WFAlertButton *)escapeButton;
-(id<WFPresentedAlert>)presentedAlert;
-(void)setPresentedAlert:(id<WFPresentedAlert>)arg1 ;
-(NSMutableArray *)mutableButtons;
-(void)setMutableButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTextFieldConfigurationHandlers;
-(void)setMutableTextFieldConfigurationHandlers:(NSMutableArray *)arg1 ;
-(NSArray *)textFieldConfigurationHandlers;
-(WFAlertPresentationSource *)presentationSource;
-(BOOL)adaptsToAlertStyleIfPopoverNecessary;
-(BOOL)prefersItemPickerSheetPresentation;
-(UIEdgeInsets)contentViewPadding;
-(void)setAdaptsToAlertStyleIfPopoverNecessary:(BOOL)arg1 ;
-(void)setContentViewPadding:(UIEdgeInsets)arg1 ;
-(NSError *)associatedError;
@end

