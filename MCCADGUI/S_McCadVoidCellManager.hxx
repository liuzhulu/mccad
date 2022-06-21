// Copyright (C) 2014-2015  KIT-INR/NK
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
//
#ifndef S_MCCADVOIDCELLMANAGER_HXX
#define S_MCCADVOIDCELLMANAGER_HXX

#include "../MCCAD/McCadMcVoid/McCadVoidCellManager.hxx"

class S_McCadVoidCellManager : public McCadVoidCellManager
{
public:
    S_McCadVoidCellManager();


    /** Read the model, create the McCadGeomData object to store the geometry data. */
    void S_ReadGeomData(const int & studyID);

    void S_Process(); /**< The main procesure */


};

#endif // S_MCCADVOIDCELLMANAGER_HXX
