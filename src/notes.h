/*
 * KeepNote.h
 *
 *  Created on: Jul 5, 2013
 *      Author: matej
 */

#ifndef KEEPNOTE_H_
#define KEEPNOTE_H_

void note_data_received(DictionaryIterator* iterator);
void note_init();
void note_window_load(Window *window);
void note_window_unload(Window *window);

#endif /* KEEPNOTE_H_ */
