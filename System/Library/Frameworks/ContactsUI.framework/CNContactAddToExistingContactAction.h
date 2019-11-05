/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>
#import <ContactsUI/CNContactPickerDelegate.h>
#import <ContactsUI/CNContactViewControllerDelegate.h>

@class CNContact, CNContactPickerViewController, NSString;

@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate> {

	CNContact* _chosenContact;
	CNContactPickerViewController* _contactPicker;

}

@property (nonatomic,retain) CNContactPickerViewController * contactPicker;              //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) CNContact * chosenContact;                                  //@synthesize chosenContact=_chosenContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
-(void)setChosenContact:(CNContact *)arg1 ;
-(CNContactPickerViewController *)contactPicker;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(CNContact *)chosenContact;
@end

